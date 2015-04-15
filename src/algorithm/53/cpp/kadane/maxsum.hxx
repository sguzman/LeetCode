#pragma once

#include <vector>

class Solution {
public:
  int maxSubArray(std::vector<int>& nums) {
    int maxSum{nums.front()}, sumSoFar{nums.front()};

    for (auto& num: nums) {
      maxSum = std::max(num, maxSum + num);
      sumSoFar = std::max(sumSoFar, maxSum);
    }

    return sumSoFar;
  }
};
