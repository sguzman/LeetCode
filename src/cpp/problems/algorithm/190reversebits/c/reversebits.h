#pragma once

#include <stdint.h>

uint32_t reverseBits(uint32_t n) {
  uint32_t final = 0;
  for (uint32_t i = 0; n != 0; i++, n >>= 1) {
    final |= (n & 1) << (31 - i);
  }

  return final;
}
