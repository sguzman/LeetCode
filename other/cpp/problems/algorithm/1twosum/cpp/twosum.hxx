#pragma once

#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution {
public:
  vector<int> twoSum(const vector<int>& nums, const int target) {
    unordered_map<int,int> sums;
    vector<int> result{2, 1};

    for (unsigned int idx{}; idx < nums.size(); ++idx) {
      if (sums.find(nums[idx]) == sums.cend()) {
        sums.insert({target - nums[idx], static_cast<int>(idx)});
      } else {
        result[0] = sums[nums[idx]] + 1;
        result[1] = static_cast<int>(idx) + 1;

        break;
      }
    }


    return result;
  }
};
