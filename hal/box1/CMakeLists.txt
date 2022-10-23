file(GLOB_RECURSE SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
    )

add_library(hal-box1 ${SOURCES})

target_compile_options(hal-box1 PUBLIC --silicon_version=msp
    PUBLIC --define=__MSP430G2553__)

target_link_options(hal-box1 PUBLIC --define=__MSP430G2553__
    PUBLIC --rom_model)
target_link_libraries(hal-box1 PUBLIC msp430g2553.cmd)
