cmake_minimum_required(VERSION 4.0)
project(libtorch_example)

find_package(Torch REQUIRED)

add_executable(libtorch_example generate.cpp)

# Include path for nlohmann/json
target_include_directories(libtorch_example PRIVATE ${PROJECT_SOURCE_DIR}/external/json)

target_link_libraries(libtorch_example "${TORCH_LIBRARIES}")
set_property(TARGET libtorch_example PROPERTY CXX_STANDARD 17)
