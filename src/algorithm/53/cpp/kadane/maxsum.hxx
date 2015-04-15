#pragma once

#include <vector>

class Solution {
public:
  int maxSubArray(std::vector<int>& nums) {
    int maxSum{nums.front()}, sumSoFar{nums.front()};

    for (auto iter = nums.cbegin() + 1; iter < nums.cend(); ++iter) {
      maxSum = std::max(*iter, maxSum + *iter);
      sumSoFar = std::max(sumSoFar, maxSum);
    }

    return sumSoFar;
  }
};
