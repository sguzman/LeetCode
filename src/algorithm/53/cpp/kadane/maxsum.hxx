#pragma once

#include <vector>

class Solution {
public:
  int maxSubArray(std::vector<int>& nums) {
    int maxSum{}, sumSoFar{ };

    for (int i = 0; i < nums.size(); ++i) {
      sumSoFar += nums[i];

      if (sumSoFar < 0) {
        sumSoFar = 0;
      } else if (maxSum < sumSoFar) {
        maxSum = sumSoFar;
      }
    }

    return maxSum;
  }
};
