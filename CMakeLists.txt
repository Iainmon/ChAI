cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
# project(MyProject LANGUAGES CXX)

include(CMakePrintHelpers)

# set(CMAKE_VERBOSE_MAKEFILE ON)

if(UNIX AND NOT APPLE)
    set(LINUX TRUE)
endif()

set(PROJECT_ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(PROJECT_BINARY_DIR "${CMAKE_BINARY_DIR}")
set(PROJECT_CACHE_DIR "${PROJECT_ROOT_DIR}/.cache")
set(LIBTORCH_DIR "${PROJECT_ROOT_DIR}/libtorch")
# set(LIBTORCH_STATIC_INSTALL_DIR "${PROJECT_ROOT_DIR}/libtorch_static")
set(BRIDGE_DIR "${PROJECT_ROOT_DIR}/bridge")
set(Torch_DIR "${PROJECT_ROOT_DIR}/libtorch")

find_package(chpl REQUIRED HINTS ${PROJECT_ROOT_DIR}/cmake/chapel)
list(APPEND CMAKE_MODULE_PATH "${PROJECT_ROOT_DIR}/cmake")
list(APPEND CMAKE_MODULE_PATH "${PROJECT_ROOT_DIR}/cmake/chapel")

project(MyProject LANGUAGES CXX C CHPL)
message(STATUS "Using chpl: ${CMAKE_CHPL_COMPILER}")


if(APPLE)
    set(CMAKE_C_COMPILER "/usr/bin/clang")
    set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
endif()
set(CMAKE_CXX_STANDARD 20)


include(LibTorchDL)
download_libtorch(
    CACHE_DIR ${PROJECT_CACHE_DIR}
    DESTINATION ${LIBTORCH_DIR}
)

list(APPEND CMAKE_PREFIX_PATH "${LIBTORCH_DIR}/share/cmake")
find_package(Torch REQUIRED)  
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23 -lm -ldl ${TORCH_CXX_FLAGS}")


cmake_print_variables(TORCH_LIBRARIES)
cmake_print_variables(TORCH_INCLUDE_DIRS)
cmake_print_variables(TORCH_INSTALL_PREFIX)
cmake_print_variables(TORCH_CXX_FLAGS)
cmake_print_variables(TORCH_LIBRARY)


file(GLOB CHAI_LIB_FILES "${PROJECT_ROOT_DIR}/lib/*.chpl")

# file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/resources_dummy.c "int main(int argc, const char **argv){ return 1; }\n")
# add_executable(ChAI ${CMAKE_CURRENT_BINARY_DIR}/resources_dummy.c)
# # file(GLOB RESOURCE_FILES *.bmp *.wav moose.dat utf8.txt)
# foreach(RESOURCE_FILE ${CHAI_LIB_FILES})
#     add_custom_command(
#         TARGET ChAI 
#         POST_BUILD 
#         COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different ${RESOURCE_FILE} $<TARGET_FILE_DIR:ChAI>
#     )
# endforeach(RESOURCE_FILE)

# file(COPY ${CHAI_LIB_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})




add_custom_target(
    ChAI
    ALL
    DEPENDS ${PROJECT_SOURCE_DIR}/lib
    # SOURCES ${CHAI_LIB_FILES}
    # COMMAND ${CMAKE_COMMAND} -E echo "Building ChAI"
)

foreach(RESOURCE_FILE ${CHAI_LIB_FILES})
    add_custom_command(
        TARGET ChAI
        POST_BUILD
        # OUTPUT $<TARGET_FILE_DIR:ChAI>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different ${RESOURCE_FILE} ${PROJECT_BINARY_DIR}/lib
        # DEPENDS ${CHAI_LIB_FILES}
    )
endforeach(RESOURCE_FILE)



# foreach(RESOURCE_FILE ${CHAI_LIB_FILES})
#     add_custom_command(
#         TARGET ChAI 
#         POST_BUILD 
#         COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different ${RESOURCE_FILE} $<TARGET_FILE_DIR:ChAI>
#     )
# endforeach(RESOURCE_FILE)


function(watch)
    set_property(
            DIRECTORY
            APPEND
            PROPERTY CMAKE_CONFIGURE_DEPENDS ${ARGV}
    )
endfunction()



# cmake_print_variables(CHAI_LIB_FILES)

add_library(bridge OBJECT ${BRIDGE_DIR}/include/bridge.h ${BRIDGE_DIR}/lib/bridge.cpp)

target_link_libraries(
    bridge
    PRIVATE
    ${TORCH_LIBRARIES}
    # ${LIBTORCH_DIR}/lib/libtorch.so
    # ${LIBTORCH_DIR}/lib/libtorch_cpu.so
    # ${LIBTORCH_DIR}/lib/libc10.so
    # ${LIBTORCH_DIR}/lib/libtorch_global_deps.so
)

target_include_directories(
    bridge
    PRIVATE
    ${BRIDGE_DIR}/include
    ${LIBTORCH_DIR}/include
    ${LIBTORCH_DIR}/include/torch/csrc/api/include
    # ${BRIDGE_DIR}/util
)


add_library(bridge_objs STATIC $<TARGET_OBJECTS:bridge>)
set_target_properties(bridge_objs
    PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)


set(BRIDGE_OBJECT_FILES $<TARGET_OBJECTS:bridge>)

# add_custom_command(
#     TARGET bridge
#     POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy_directory
#             "${CMAKE_CURRENT_SOURCE_DIR}/style-transfer/models"
#             "$<TARGET_FILE_DIR:StyleTransfer>/style-transfer/models"
#     COMMENT "NOT! Copying ${PROJECT_ROOT_DIR}/examples/vgg/images to $<TARGET_FILE_DIR:vgg>/images"
# )



file(GLOB LIBTORCH_ALL_LIB_FILES 
    # "${LIBTORCH_DIR}/lib/*.a" 
    "${LIBTORCH_DIR}/lib/*.dylib" 
    "${LIBTORCH_DIR}/lib/*.so")

set(LIBTORCH_ALL_LIBS "")
foreach(lib_path IN LISTS LIBTORCH_ALL_LIB_FILES)
    get_filename_component(lib_name "${lib_path}" NAME_WE)
    list(APPEND LIBTORCH_ALL_LIBS "${lib_name}")
endforeach()


set(REQUIRED_LIBS
    "libtorch"
    "libtorch_cpu"
    "libc10"
)

set(DISALLOWED_LIBS
    "libtorch_python"
)

set(LIBTORCH_LIBS_LINKER_ARGS "")  # Will hold the list of "-l..." flags.
foreach(lib_name IN LISTS LIBTORCH_ALL_LIBS)
    if(lib_name IN_LIST DISALLOWED_LIBS)
        if(lib_name IN_LIST REQUIRED_LIBS)
            message(FATAL_ERROR "Required lib ${lib_name} is disallowed.")
        else()
            message(STATUS "Skipping disallowed lib: ${lib_name}")
            continue()
        endif()
    endif()
    string(REGEX REPLACE "^lib" "" lib_name_short "${lib_name}")
    list(APPEND LIBTORCH_LIBS_LINKER_ARGS "-l${lib_name_short}")
endforeach()

cmake_print_variables(LIBTORCH_LIBS_LINKER_ARGS)
# cmake_print_variables(${BRIDGE_OBJECT_FILES})
# cmake_print_variables(BRIDGE_OBJECT_FILES)


set(LIBTORCH_LIBS_LINKER_ARGS 
    "-ltorch"
    # "-ltorch_cpu"
    # "-lc10"
    # "-ltorch_global_deps"
)
cmake_print_variables(LIBTORCH_LIBS_LINKER_ARGS)


add_executable(TorchBridge ${BRIDGE_DIR}/lib/Bridge.chpl)
add_dependencies(TorchBridge bridge)
add_dependencies(TorchBridge ChAI)
target_link_options(TorchBridge
    PRIVATE
        ${BRIDGE_DIR}/include/bridge.h
        ${BRIDGE_OBJECT_FILES}
        -L ${LIBTORCH_DIR}/lib
        "-ltorch"
        "-ltorch_cpu"
        "-lc10"
        "-ltorch_global_deps"
        ${LIBTORCH_LIBS_LINKER_ARGS}
        --ldflags "-Wl,-rpath,${LIBTORCH_DIR}/lib"
)




add_executable(TinyLayerTest 
    ${PROJECT_ROOT_DIR}/test/tiny/layer_test.chpl
    ${CHAI_LIB_FILES}
    )
add_dependencies(TinyLayerTest bridge)
add_dependencies(TinyLayerTest ChAI)
target_link_options(TinyLayerTest
    PRIVATE
        --main-module layer_test.chpl
        # -M ${PROJECT_ROOT_DIR}/lib
        ${CHAI_LINKER_ARGS}
)
# chpl test/tiny/layer_test.chpl -M lib bridge/include/bridge.h build/CMakeFiles/bridge.dir/bridge/lib/bridge.cpp.o -L libtorch/lib -ltorch -ltorch_cpu -lc10 -ltorch_global_deps --ldflags "-Wl,-rpath,libtorch/lib"

# chpl --fast -o vgg test.chpl -M ../../lib /Users/iainmoncrief/Documents/Github/ChAI/bridge/include/bridge.h /Users/iainmoncrief/Documents/Github/ChAI/build/CMakeFiles/bridge.dir/bridge/lib/bridge.cpp.o -L /Users/iainmoncrief/Documents/Github/ChAI/libtorch/lib -ltorch -ltorch_cpu -lc10 -ltorch_global_deps --ldflags "-Wl,-rpath,/Users/iainmoncrief/Documents/Github/ChAI/libtorch/lib"

# chpl -o vgg test.chpl $(../../embed_libtorch.sh .)
# chpl --fast -o vgg test.chpl $(../../embed_libtorch.sh .)




set(CHAI_LINKER_ARGS
    -M ${PROJECT_ROOT_DIR}/lib
    ${BRIDGE_DIR}/include/bridge.h
    ${BRIDGE_OBJECT_FILES}
    -L ${LIBTORCH_DIR}/lib
    ${LIBTORCH_LIBS_LINKER_ARGS}
    --ccflags "-I${BRIDGE_DIR}/include -L${PROJECT_ROOT_DIR}/build"
    --ldflags "-L${PROJECT_ROOT_DIR}/build -Wl,-rpath,${LIBTORCH_DIR}/lib"
)



add_executable(vgg 
    "${PROJECT_ROOT_DIR}/examples/vgg/test.chpl"
    ${PROJECT_ROOT_DIR}/examples/vgg/VGG.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(vgg bridge)
add_dependencies(vgg ChAI)
target_link_options(vgg
    PRIVATE
    # -M ${PROJECT_ROOT_DIR}/examples/vgg
    -svggExampleDir="${PROJECT_ROOT_DIR}/examples/vgg"
    ${CHAI_LINKER_ARGS}
)

add_custom_command(
    TARGET vgg
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
            "${PROJECT_ROOT_DIR}/examples/vgg/images"
            "$<TARGET_FILE_DIR:vgg>/images"
    COMMENT "Copying ${PROJECT_ROOT_DIR}/examples/vgg/images to $<TARGET_FILE_DIR:vgg>/images"
)

# ./vgg images/frog.jpg

# add_subdirectory(bridge)

# add_subdirectory(examples)
add_subdirectory("test")
# add_subdirectory(demos)



add_executable(MPSTest
    "${PROJECT_ROOT_DIR}/test/tiny/mps.cpp"
)

target_include_directories(MPSTest
    PRIVATE
        ${LIBTORCH_DIR}/include
        ${LIBTORCH_DIR}/include/torch/csrc/api/include
)

target_link_directories(MPSTest
    PRIVATE
        ${LIBTORCH_DIR}/lib
)

target_link_libraries(MPSTest
    PRIVATE 
        -ltorch
        -ltorch_cpu
        -lc10
        -ltorch_global_deps
)