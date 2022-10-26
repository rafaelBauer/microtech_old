#ifndef MICROTECH_IHWOUTPUT_HPP
#define MICROTECH_IHWOUTPUT_HPP

namespace MicroTech {
/**
 * Interface to access a hardware output
 */
class iHwOutput {
public:
  virtual ~iHwOutput() = default;

  enum class State {
    LOW,              ///< Pin state is Low = 0
    HIGH,             ///< Pin state is High = 1
    HIGH_IMPEDANCE    ///< Pin state is neither low nor high
  };

  /**
   * Method to get the state of an output
   * @param state Reference to the state variable
   * @return If fetching the state was successful
   */
  virtual bool getOutput(State& state) noexcept = 0;

  /**
   * Method to set the state of an output
   * @param state desired state value
   * @return If fetching the state was successful
   */
  virtual bool setOutput(const State& state) noexcept = 0;

};
}  // namespace MicroTech

#endif  // MICROTECH_IHWOUTPUT_HPP
