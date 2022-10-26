#ifndef MICROTECH_HWINPUTHANDLE_HPP
#define MICROTECH_HWINPUTHANDLE_HPP

#include "iHwInput.hpp"

#include <cstdint>

namespace MicroTech {

class HwInputHandle : public iHwInput {
  friend class Board;
protected:
  HwInputHandle(uint8_t& inputPortRegistryPtr, uint8_t desiredInputBit);
public:
  ~HwInputHandle() override = default;

  bool getInput(State& state) const noexcept override;

private:
  const uint8_t inputBit;
  const uint8_t bitMask;
  uint8_t& portRegistry;
};

}  // namespace MicroTech

#endif  // MICROTECH_HWINPUTHANDLE_HPP
