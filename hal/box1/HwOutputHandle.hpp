#ifndef MICROTECH_HWOUTPUTHANDLE_HPP
#define MICROTECH_HWOUTPUTHANDLE_HPP

#include "iHwOutput.hpp"

#include <cstdint>

namespace MicroTech {

class HwOutputHandle : public iHwOutput {
friend class Board;
protected:
  HwOutputHandle(volatile uint8_t& outputPortRegistryPtr, uint8_t desiredOutputBit);
public:
  ~HwOutputHandle() override = default;

  bool getOutput(State& state) noexcept override;

  bool setOutput(const State& state) noexcept override;

private:
  const uint8_t outputBit;
  const uint8_t bitMask;
  volatile uint8_t& portRegistry;
};

}  // namespace MicroTech

#endif  // MICROTECH_HWOUTPUTHANDLE_HPP
