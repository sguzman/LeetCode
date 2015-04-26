#pragma once

#include <unordered_map>

using ull = unsigned long long;

class Solution {
public:
  int numTrees(int n) {
    ull ret = static_cast<unsigned long long>(n);

    ret = f(ret);

    return static_cast<int>(ret);
  }

private:
  inline ull f(ull n) noexcept {
    if (exists(n)) {
      return fHashMap[n];
    } else {
      if (n <= 1ull) {
        return fHashMap[n] = 1ull;
      } else {
        auto sum = 0ull;

        for (auto i = 0ull; i < n; ++i) {
          sum += f(i) + f(n - i);
        }

        return fHashMap[n] = sum;
      }
    }
  }

  inline bool exists(ull key) {
    try {
      fHashMap.at(key);
      return true;
    } catch(...) {
      return false;
    }
  }

  std::unordered_map<ull,ull> fHashMap;
};
