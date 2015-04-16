#pragma once

#include <string>
#include <unordered_map>

class Solution {
public:
  int strStr(std::string haystack, std::string needle) {
    if (haystack.length() == 0 || needle.length() == 0) {
      if (needle.length() == 0) {
        return 0;
      }

      return -1;
    }

    return horspool(haystack, needle);
  }

  static int horspool(std::string haystack, std::string needle) {
    std::unordered_map<char, int> badMatch;
    badCharTable(badMatch, needle);
    // This value will be used quite a lot
    const int length = (int) needle.length();
    const int lastIdx = length - 1;

    for (int m = lastIdx, i = m; m < haystack.length();) {
      if (haystack[m + (i - lastIdx)] == needle[i]) {
        if (i == 0) {
          return m - lastIdx;
        }

        --i;
      } else {
        i = lastIdx;
        m += Solution::getDefault(badMatch, haystack[m], (int) needle.length());
      }
    }

    return -1;
  }

  static void badCharTable(std::unordered_map<char, int>& table, const std::string& needle) {
    table.clear();
    const int lastIdx = static_cast<int>(needle.length()) - 1;

    for (int i = 0; i < lastIdx; ++i) {
      table[needle[i]] = lastIdx - i;
    }

    if (exists(table, needle.back())) {
      table[needle.back()] = static_cast<int>(needle.length()) - lastIdx - 1;
    }
  }

private:
  static inline bool exists(std::unordered_map<char, int>& table, char key) {
    try {
      table.at(key);
      return true;
    } catch(...) {
      return false;
    }
  }

  static inline int getDefault(std::unordered_map<char, int>& table, char key, int value) {
    if (exists(table, key)) {
      return table[key];
    } else {
      return value;
    }
  }
};
