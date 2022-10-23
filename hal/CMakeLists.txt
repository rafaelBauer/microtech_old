add_library(hal INTERFACE)
add_library(Rafa::HAL ALIAS hal)

if(MSP_COMPILER)
  add_subdirectory(box1)
endif()

add_subdirectory(simulation)
