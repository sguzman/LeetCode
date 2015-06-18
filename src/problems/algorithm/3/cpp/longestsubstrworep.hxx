#pragma once

#include <string>

using std::string;

class Solution {
public:
  int lengthOfLongestSubstring(const string& s) {
    int length{}, index{};
    int map[128] = {-1};
    std::fill_n(map, sizeof(map) /  sizeof(int), -1);

    for (int idx = 0; idx < s.size(); ++idx) {
    }

    return length;
  }
};
