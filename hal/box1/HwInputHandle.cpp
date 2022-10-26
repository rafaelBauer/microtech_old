#include "HwInputHandle.hpp"

namespace MicroTech {

HwInputHandle::HwInputHandle(uint8_t& inputPortRegistryPtr, uint8_t desiredInputBit) : inputBit(desiredInputBit),
    portRegistry(inputPortRegistryPtr), bitMask(0x01<<desiredInputBit) {}

bool HwInputHandle::getInput(State& state) const noexcept {
  return false;
}
}  // namespace MicroTech
