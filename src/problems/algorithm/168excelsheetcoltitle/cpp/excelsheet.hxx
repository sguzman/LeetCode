#pragma once

#include <cstdlib>
#include <string>

class Solution {
public:
  std::string convertToTitle(int n) {
    if (n == 0) {
      return "";
    } else {
      auto divT = div(n - 1, 26);

      return convertToTitle(divT.quot) + (char) (divT.rem + 'A');
    }
  }
};
