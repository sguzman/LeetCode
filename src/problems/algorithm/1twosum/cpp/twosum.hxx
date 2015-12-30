#pragma once

#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution {
public:
  vector<long> twoSum(const vector<int>& nums, const int target) {
    unordered_map<long, long> values;

    long delta;
    for (unsigned long idx{}; idx < nums.size(); ++idx) {
      delta = target - nums[idx];

      // If condition is true, then we're done here
      if (values.find(static_cast<int>(delta)) != values.cend()) {
        return vector<long>{values[delta], static_cast<long>(idx) + 1};
      }

      values[static_cast<long>(nums[idx])] = static_cast<long>(idx + 1);
    }

    // Should not happen but it's here to satisfy the compiler
    return vector<long>{};
  }
};
