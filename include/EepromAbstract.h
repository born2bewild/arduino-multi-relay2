#pragma once

#include <stdint.h>

namespace lkankowski {

  class EepromInterface
  {
  public:
    virtual uint8_t read(int idx) = 0;
    virtual void write(int idx, uint8_t val) = 0;
  };


  class Eeprom : public EepromInterface
  {
  public:
    uint8_t read(int idx);
    void write(int idx, uint8_t val);

    #ifndef ARDUINO
      static uint8_t _mem[11];
    #endif
  };

} // namespace lkankowski
