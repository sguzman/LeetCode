#pragma once

#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution {
public:
  vector<int> twoSum(const vector<int>& nums, const int target) {
    unordered_map<int, int> values;

    int delta;
    for (int idx = 0; idx < nums.size(); ++idx) {
      delta = target - nums[idx];

      // If condition is true, then we're done here
      if (values.find(delta) != values.cend()) {
        return vector<int>{values[delta], idx + 1};
      }

      values[nums[idx]] = idx + 1;
    }

    // Should not happen but it's here to satisfy the compiler
    return vector<int>{};
  }
};
