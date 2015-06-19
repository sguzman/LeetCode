#pragma once

#include <string>

using std::string;

class Solution {
public:
  int lengthOfLongestSubstring(const string& s) {
    int length{}, index{}, map[128];

    std::fill_n(map, sizeof(map) /  sizeof(int), -1);

    for (int idx = 0; idx < s.size(); ++idx) {
      index = std::max(map[s[idx]] + 1, index);

      map[s[idx]] = idx;

      length = std::max(length, idx - index + 1);
    }

    return length;
  }
};
