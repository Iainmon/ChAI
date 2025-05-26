add_executable(BrandynReLU
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_relu.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynReLU bridge)
add_dependencies(BrandynReLU ChAI)
target_link_options(BrandynReLU
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynReLU PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynGELU
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_gelu.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynGELU bridge)
add_dependencies(BrandynGELU ChAI)
target_link_options(BrandynGELU
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynGELU PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynELU
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_elu.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynELU bridge)
add_dependencies(BrandynELU ChAI)
target_link_options(BrandynELU
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynELU PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynRReLU
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_rrelu.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynRReLU bridge)
add_dependencies(BrandynRReLU ChAI)
target_link_options(BrandynRReLU
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynRReLU PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynSiLU
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_silu.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynSiLU bridge)
add_dependencies(BrandynSiLU ChAI)
target_link_options(BrandynSiLU
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynSiLU PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynMish
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_mish.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynMish bridge)
add_dependencies(BrandynMish ChAI)
target_link_options(BrandynMish
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynMish PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynSigmoid
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_sigmoid.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynSigmoid bridge)
add_dependencies(BrandynSigmoid ChAI)
target_link_options(BrandynSigmoid
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynSigmoid PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynTanh
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_tanh.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynTanh bridge)
add_dependencies(BrandynTanh ChAI)
target_link_options(BrandynTanh
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynTanh PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynReLU6
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_relu6.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynReLU6 bridge)
add_dependencies(BrandynReLU6 ChAI)
target_link_options(BrandynReLU6
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynReLU6 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynSELU
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_selu.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynSELU bridge)
add_dependencies(BrandynSELU ChAI)
target_link_options(BrandynSELU
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynSELU PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynHardsigmoid
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_hardsigmoid.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynHardsigmoid bridge)
add_dependencies(BrandynHardsigmoid ChAI)
target_link_options(BrandynHardsigmoid
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynHardsigmoid PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynLogSigmoid
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_logsigmoid.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynLogSigmoid bridge)
add_dependencies(BrandynLogSigmoid ChAI)
target_link_options(BrandynLogSigmoid
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynLogSigmoid PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynTanhshrink
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_tanhshrink.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynTanhshrink bridge)
add_dependencies(BrandynTanhshrink ChAI)
target_link_options(BrandynTanhshrink
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynTanhshrink PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynSoftSign
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_softsign.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynSoftSign bridge)
add_dependencies(BrandynSoftSign ChAI)
target_link_options(BrandynSoftSign
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynSoftSign PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynHardswish
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_hardswish.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynHardswish bridge)
add_dependencies(BrandynHardswish ChAI)
target_link_options(BrandynHardswish
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynHardswish PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynHardshrink
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_hardshrink.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynHardshrink bridge)
add_dependencies(BrandynHardshrink ChAI)
target_link_options(BrandynHardshrink
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynHardshrink PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynHardtanh
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_hardtanh.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynHardtanh bridge)
add_dependencies(BrandynHardtanh ChAI)
target_link_options(BrandynHardtanh
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynHardtanh PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynSoftplus
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_softplus.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynSoftplus bridge)
add_dependencies(BrandynSoftplus ChAI)
target_link_options(BrandynSoftplus
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynSoftplus PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynThreshold
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_threshold.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynThreshold bridge)
add_dependencies(BrandynThreshold ChAI)
target_link_options(BrandynThreshold
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynThreshold PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynCELU
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_celu.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynCELU bridge)
add_dependencies(BrandynCELU ChAI)
target_link_options(BrandynCELU
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynCELU PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynLeakyReLU
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_leakyrelu.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynLeakyReLU bridge)
add_dependencies(BrandynLeakyReLU ChAI)
target_link_options(BrandynLeakyReLU
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynLeakyReLU PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)




add_executable(BrandynSoftshrink 
    ${CMAKE_CURRENT_SOURCE_DIR}/brandyn_softshrink.chpl
    ${CHAI_LIB_FILES}
)
add_dependencies(BrandynSoftshrink bridge)
add_dependencies(BrandynSoftshrink ChAI)
target_link_options(BrandynSoftshrink
    PRIVATE
    ${CHAI_LINKER_ARGS}
)

set_target_properties(BrandynSoftshrink PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)