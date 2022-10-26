#include "Board.hpp"
#include "iHwOutput"

#include <memory>

using namespace MicroTech;

void main() {
  Board board;

  if(board.initializeBoard()) {
    // log somehow
  }

  if(board.startBoard()) {
    // log somehow
  }

  std::unique_ptr<iHwOutput> pinX1_1 = board.getOutputResource(Board::Resources::OUTPUT_X1_1);

  iHwOutput::State stateX1 = iHwOutput::State::HIGH_IMPEDANCE;
  pinX1_1->getOutput(stateX1);
  stateX1 = iHwOutput::State::HIGH;
  pinX1_1->setOutput(stateX1);

  while(true) {}
}
