#pragma once

#include <unordered_map>

class Solution {
public:
  int numTrees(int n) {
    unsigned long long ret = static_cast<unsigned long long>(n);

    return static_cast<int>(ret);
  }

private:
  std::unordered_map<unsigned long long, unsigned long long> fHashMap;
};
