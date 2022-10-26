file(GLOB_RECURSE SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
    )

add_library(hal-box1 ${SOURCES})
add_library(MicroTech::HAL::Box1 ALIAS hal-box1)

target_include_directories(hal-box1
        PUBLIC ${PROJECT_SOURCE_DIR}/hal/include
        )

target_compile_options(hal-box1
    PUBLIC --silicon_version=msp
    PUBLIC --use_hw_mpy=none
    PUBLIC --define=__MSP430G2553__
    PUBLIC --printf_support=minimal
    PUBLIC --display_error_number
    PUBLIC --diag_wrap=off
    PUBLIC --diag_warning=225
    PUBLIC --emit_warnings_as_errors
    )

target_link_options(hal-box1
    PUBLIC --silicon_version=msp
    PUBLIC --use_hw_mpy=none
    PUBLIC --define=__MSP430G2553__
    PUBLIC --heap_size=80
    PUBLIC --stack_size=80
    PUBLIC --use_hw_mpy=none
    PUBLIC --diag_wrap=off
    PUBLIC --diag_warning=225
    PUBLIC --display_error_number
    PUBLIC --reread_libs
    PUBLIC  --warn_sections
    PUBLIC --rom_model)

target_link_libraries(hal-box1
    PUBLIC -llnk_msp430g2553.cmd
    PUBLIC -llibc.a
    )
