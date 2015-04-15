#pragma once

class Solution {
public:
  int maxSubArray(int A[], int n) {
    int maxSum{}, sumSoFar{ };

    for (int i = 0; i < n; ++i) {
      sumSoFar += A[i];

      if (sumSoFar < 0) {
        sumSoFar = 0;
      } else if (maxSum < sumSoFar) {
        maxSum = sumSoFar;
      }
    }

    return maxSum;
  }
};
