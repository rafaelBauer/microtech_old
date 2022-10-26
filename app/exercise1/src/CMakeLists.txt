
file(GLOB_RECURSE SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
        )

add_executable(exercise1 ${SOURCES})

target_link_libraries(exercise1 PRIVATE MicroTech::HAL)