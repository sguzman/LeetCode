#pragma once

#include <string>

using std::string;

class Solution {
public:
  int lengthOfLongestSubstring(const string& s) {
    unsigned long length{}, index{}, map[128];

    std::fill_n(map, sizeof(map) /  sizeof(int), -1);

    for (unsigned long idx{}; idx < s.size(); ++idx) {
      index = std::max(map[static_cast<unsigned long>(s[idx])] + 1, index);

      map[static_cast<unsigned long>(s[idx])] = idx;

      length = std::max(length, idx - index + 1);
    }

    return static_cast<int>(length);
  }
};
