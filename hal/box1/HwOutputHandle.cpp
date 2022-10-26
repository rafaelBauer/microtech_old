#include "HwOutputHandle.hpp"

namespace MicroTech {

HwOutputHandle::HwOutputHandle(volatile uint8_t& outputPortRegistryPtr, uint8_t desiredOutputBit) : outputBit(desiredOutputBit),
    portRegistry(outputPortRegistryPtr), bitMask(0x01<<desiredOutputBit) {}

bool HwOutputHandle::getOutput(State& state) noexcept {

  return false;
}

bool HwOutputHandle::setOutput(const State& state) {
  switch (state) {
    case State::LOW:
      portRegistry &= ~(bitMask);
      return true;
    case State::HIGH:
      portRegistry |= bitMask;
      return true;
    case State::HIGH_IMPEDANCE:
      break;
  }
  return false;
}

}  // namespace MicroTech
