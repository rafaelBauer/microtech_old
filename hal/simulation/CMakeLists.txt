
file(GLOB_RECURSE SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
    )

add_library(hal-simulation ${SOURCES})
add_library(MicroTech::HAL::Simulation ALIAS hal-simulation)

target_include_directories(hal-simulation
        PUBLIC ${PROJECT_SOURCE_DIR}/hal/include
        )
