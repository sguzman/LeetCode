#pragma once

#include <string>

class Solution {
public:
  int titleToNumber(std::string s) {
    int sum{};

    for (int down{static_cast<int>(s.size()) - 1}, up{}, coef26{1}; up < s.size(); (sum += (static_cast<int>(s[down]) - 64) * coef26), ++up, --down, coef26 *= 26);

    return sum;
  }
};
