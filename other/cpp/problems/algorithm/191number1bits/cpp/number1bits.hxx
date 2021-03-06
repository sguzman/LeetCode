#pragma once

#include <cstdint>

class Solution {
public:
	int hammingWeight(uint32_t n) {
		uint32_t count{};
		for (uint32_t i{}; i < 32; i++) {
			count += n & 1;
			n >>= 1;
		}

		return static_cast<int>(count);
	}
};
