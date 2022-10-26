#ifndef MICROTECH_ILED_HPP
#define MICROTECH_ILED_HPP

namespace MicroTech {

class iLed {
public:
  virtual ~iLed() = default;

  virtual bool setState(const State& state) = 0
};

}  // namespace MicroTech

#endif  // MICROTECH_ILED_HPP
