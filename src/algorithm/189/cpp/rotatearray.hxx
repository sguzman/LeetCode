#pragma once

class Solution {
public:
  void rotate(int nums[], int n, int k) {
    if (n == 0 || n == 1 || n == k || (k != 1 && ((k % n) == 0))) {
      return;
    }

    bool isMultiTrack{};

    int factor{n};
    for (int i{}, mod{}; i < n; ++i, mod = (mod + k) % n) {
      if (mod == 0 && i != 0) {
        factor = i;
        isMultiTrack = true;
        break;
      }
    }

    if (isMultiTrack) {
      int limit = n / factor;
      for (int i{}; i < limit; ++i) {
        singleTrack(nums, n, k, factor, i);
      }
    } else {
      singleTrack(nums, n, k, n, 0);
    }
  }

private:
  static inline void singleTrack(int nums[], int n, int k, int iterFor, int initIdx) {
    const int first{(initIdx + k) % n};
    int tmp1{nums[first]}, tmp2;
    nums[first] = nums[initIdx];

    for (int i = 1, idx{(first + k) % n}; i < iterFor; ++i, (tmp1 = tmp2), (idx = (idx + k) % n)) {
      tmp2 = nums[idx];
      nums[idx] = tmp1;
    }
  }
};
