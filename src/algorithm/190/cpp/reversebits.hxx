#pragma once

#include <cstdint>

class Solution {
public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t final{};
    for (uint32_t i{}; n != 0; i++, n >>= 1) {
      final |= (n & 1) << 31 - i;
    }

    return final;
  }
};
