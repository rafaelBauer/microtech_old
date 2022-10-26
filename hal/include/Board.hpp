#ifndef MICROTECH_BOARD_HPP
#define MICROTECH_BOARD_HPP

#include "iHwInput.hpp"
#include "iHwOutput.hpp"

#include <memory>

namespace MicroTech {
class Board {
public:
  ~Board() = default;

  enum class Resources {
    OUTPUT_X1_1,
  };

  bool initializeBoard();
  bool startBoard();

  std::unique_ptr<iHwOutput> getOutputResource(Resources resource);

private:
};
}  // namespace MicroTech
#endif  // MICROTECH_BOARD_HPP
