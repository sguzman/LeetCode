#pragma once

#include <vector>

class Solution{
public:
  int majorityElement(std::vector<int> &sum) {
    int major{sum[0]}, freq{};

    for (unsigned long i = 0; i < sum.size(); ++i) {
      if (sum[i] == major) {
        ++freq;
      } else {
        if (--freq == 0) {
          freq = 1;
          major = sum[i];
        }
      }
    }

    return major;
  }
};
