#ifndef MICROTECH_IHWINPUT_HPP
#define MICROTECH_IHWINPUT_HPP

namespace MicroTech {

/**
 * Interface to access a hardware input
 */
class iHwInput {
public:
  virtual ~iHwInput() = default;

  enum class State {
    LOW,      ///< Pin state is Low = 0
    HIGH,     ///< Pin state is High = 1
    TRISTATE, ///< Pin state is neither low nor high
  };

  /**
   * Method to get the state of an input
   * @param state Reference to the state variable
   * @return If fetching the state was successful
   */
  virtual bool getInput(State& state) const noexcept = 0;
};

}  // namespace MicroTech

#endif  // MICROTECH_IHWINPUT_HPP
