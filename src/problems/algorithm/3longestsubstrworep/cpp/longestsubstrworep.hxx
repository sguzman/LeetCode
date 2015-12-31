#pragma once

#include <string>
#include <unordered_map>

using std::string;
using std::max;

class Solution {
public:
  int lengthOfLongestSubstring(const string& s) {
    // Maps char to index
    std::unordered_map<char,int> map;

    // Length of string - int for convenience
    const int length = static_cast<int>(s.size());
    // Starting index of sequence - guaranteed to have unique chars
    int startIdx{};
    // Max max
    int maxSoFar{};
    // Current max
    int currentMax{};

    // For indexing string
    unsigned int idxU{};

    for (int idx{}; idx < length; idxU = static_cast<unsigned int>((++idx))) {
      // If char has occurred within the current sequence
      if (map.find(s[idxU]) != map.cend() && map[s[idxU]] >= startIdx) {
        startIdx = ++map[s[idxU]];
        map[s[idxU]] = idx;
        currentMax = idx - startIdx + 1;
        maxSoFar = max(maxSoFar, currentMax);
      } else {
        // Char-not-found procedure
        ++currentMax;
        maxSoFar = max(maxSoFar, currentMax);
        map[s[idxU]] = idx;
      }
    }

    return maxSoFar;
  }
};
