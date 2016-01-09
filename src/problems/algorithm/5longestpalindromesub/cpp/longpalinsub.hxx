#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;
using ul = unsigned long;

class Solution {
public:
    /*
     * Return the longest palindrome found within the given string
     *
     * @const string& s string to operate on
     *
     * @return longest palindrome substring
     */
    string longestPalindrome(const string& s) {
      // Length of string
      const ul len = s.length();

      // If s.length() == 1
      if (len == 1ul) {
        return s;
      }

      // Center of palindrome
      ul C{};
      // Right most boundary of palindrome
      ul R{};
      // Max length
      ul maxIdx{};

      // Preprocessed string
      const string pre{_preprocessed(s)};
      // Length of preprocessed string
      const ul pLen{pre.size()};
      const ul pLen1{pLen - 1ul};

      // Palindrome lengths
      vector<ul> P{};
      P.reserve(pLen);

      // Initialize to 0
      for (auto idx = 0ul; idx < pLen; ++idx) {
        P.push_back(0ul);
      }

      // Iterate through preprocessed string
      for (ul i{2ul}; i < pLen1; ++i) {
        // If we have already processed the current palindrome
        // We know this is the case when i appears within the range of R
        if (i <= R) {
          // Distance between i and the right bound
          const ul dist{R - i};
          // The mirror index
          const ul mirror{(C << 1ul) - i};
          // Whichever is the smallest
          // The palindrome might bleed past the right boundary
          // Thus, we have to be conservative
          if (dist < mirror) {
            P.at(dist);
          } else {
            P.at(P.at(mirror));
          }
        }

        // Now we try to expand the palindrome as much as possible
        // Keep expanding around i until sides do not match
        while (pre.at(i + (1ul + P.at(i))) == pre.at(i - (1ul + P.at(i)))) {
          ++P.at(i);
        }

        // Check if we need to change C and R
        if (i + P.at(i) > R) {
          // New center
          C = i;

          // And new right bound
          R = i + P.at(i);
        }

        if (P.at(maxIdx) < P.at(i)) {
          maxIdx = i;
        }
      }

      return s.substr((maxIdx - 1 - P.at(maxIdx)) >> 1, P.at(maxIdx));
    }

private:
    /*
     * Preprocess string for manacher's algorithm
     *
     * @const string& str string to operate on
     *
     * @return modified string with all expansion points highlighted
     */
    const string _preprocessed(const string &str) noexcept {
      // Length of string
      const ul len = str.length();

      // In case string is empty - should not happen
      if (len == 0ul) {
        return "^$";
      }

      // Length of final product
      const ul newSize{(len << 1ul) + 3ul};

      // Will hold the final modified string
      string p{};
      p.reserve(newSize);

      // Doesn't matter what the first and letters - as long as they're unique
      p.append("^");

      // Intersperse the original string within the '#'
      for (ul idx{}; idx < len; ++idx) {
        p.append("#");
        p.append(str.substr(idx, 1ul));
      }

      // Last character
      p.append("#");
      p.append("$");

      return p;
    }
};
