chai_add_executable(TinyStoriesTest
    ${CMAKE_CURRENT_SOURCE_DIR}/testArgmaxDecode.chpl
    ${PROJECT_ROOT_DIR}/lib
)

chai_add_executable(TinyStoriesTestConv2d
    ${CMAKE_CURRENT_SOURCE_DIR}/testConv2d.chpl
    ${PROJECT_ROOT_DIR}/lib
)

chai_add_executable(OliverHowTo
    ${CMAKE_CURRENT_SOURCE_DIR}/oh2.chpl
    ${PROJECT_ROOT_DIR}/lib
)   