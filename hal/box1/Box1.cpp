#include "Board.hpp"
#include "iHwOutput.hpp"

#include "HwOutputHandle.hpp"

#include <msp430g2553.h>

namespace MicroTech {
bool Board::initializeBoard() {
  // Stop Watchdog Timer
  WDTCTL = WDTPW + WDTHOLD;
  // If the calibration constants were erased, stop here.
  if (CALBC1_1MHZ ==0xFF || CALDCO_1MHZ == 0xFF) {
    while(1);
  }

  // Set clock to 1 MHz. Please don't change this if you have to upload/share
  // your code during the lab.
  // Possible options: _1 _8 _12 _16. Don't forget to adapt UART if you
  // change this!
  BCSCTL1 = CALBC1_1MHZ;
  // Set DCO step + modulation
  DCOCTL  = CALDCO_1MHZ;

  // Now enable the global interrupts
  __enable_interrupt();

  return false;
}

bool Board::startBoard() {
  return false;
}

std::unique_ptr<iHwOutput> Board::getOutputResource(Resources resource) {
  std::unique_ptr<iHwOutput> retVal;
  switch(resource) {
  case Resources::OUTPUT_X1_1:
    retVal = std::make_unique<HwOutputHandle>(P1OUT, 2);
    break;
  }

  return std::move(retVal);
}
}
