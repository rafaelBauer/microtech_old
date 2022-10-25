# Microcontroller Techniques WS 22/23
Repo maintained by Rafael Andrioli Bauer where the tasks of the
Microcontroller Techniques of WS 22/23 will be pushed.

To see it in GitHub follow the [link](https://github.com/rafaelBauer/microtech)

As soon as an exercise is finished, its commit will be tagged.

## Software structure
The software is divided in two main layers. HAL and
application.

The HAL is an abstraction of the hardware, and
depending on where one wants to run the application one can simply swap the hardware.
With that in mind, there are two HAL implementations: the box1 and simulation.
Box1 is the implementation to run on the real hardware and simulation is there
so one can execute the application code on the PC as well as write tests for the
application.

## Folders
* **hal** - the different hal implementations
* **hal/include** - the interface of the hal

## Prerequisites
* CMake > 3.13
* Code Composer Studio with MSP430 compiler (only for real board HAL)
* Clang or GCC (for HAL simulation)

## Building with CMake
When building with CMake one can set if wants to compile for the real board or for
the simulation board.
 
* CGT_TOOLCHAIN_DIR - To set the toolchain path. E.g:
`-DCGT_TOOLCHAIN_DIR=/Applications/ti/ccs1200/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS`

to change to .out
  set_target_properties(
  executable
  PROPERTIES
  OUTPUT_NAME "executable"
  SUFFIX ".out"
  )

asdasd

