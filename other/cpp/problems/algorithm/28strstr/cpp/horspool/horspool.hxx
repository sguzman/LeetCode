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
    const unsigned long length = needle.length();
    const unsigned long lastIdx = length - 1;

    for (unsigned long m = lastIdx, i = m; m < haystack.length();) {
      if (haystack[m + (i - lastIdx)] == needle[i]) {
        if (i == 0) {
          return static_cast<int>(m - lastIdx);
        }

        --i;
      } else {
        i = lastIdx;
        m += static_cast<unsigned long>(Solution::getDefault(badMatch, haystack[m], static_cast<int>(length)));
      }
    }

    return -1;
  }

  static void badCharTable(std::unordered_map<char, int>& table, const std::string& needle) {
    table.clear();
    const int lastIdx = static_cast<int>(needle.length()) - 1;

    for (int i = 0; i < lastIdx; ++i) {
      table[needle[static_cast<unsigned long>(i)]] = lastIdx - i;
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
