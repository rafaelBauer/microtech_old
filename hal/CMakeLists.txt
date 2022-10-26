add_library(hal INTERFACE)
add_library(MicroTech::HAL ALIAS hal)

add_subdirectory(simulation)

if(MSP_COMPILER)
  add_subdirectory(box1)
  target_link_libraries(hal INTERFACE MicroTech::HAL::Box1)
else()
  target_link_libraries(hal INTERFACE MicroTech::HAL::Simulation)
endif()

