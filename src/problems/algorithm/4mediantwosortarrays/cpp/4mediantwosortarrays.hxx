#pragma once

#include <vector>

using std::vector;
using std::cout;
using std::endl;

class Solution {
public:
    inline double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      const unsigned long half = (nums1.size() + nums2.size()) >> 1;

      // If length of arrays is odd
      if ((nums1.size() + nums2.size()) & 1) {
        const unsigned long halfOdd = (nums1.size() + nums2.size() + 1) >> 1;

        return findKthSmallest(nums1.data(), 0, nums1.size(), nums2.data(), 0, nums2.size(), halfOdd);
      }

      double k1 = findKthSmallest(nums1.data(), 0, nums1.size(), nums2.data(), 0, nums2.size(), half);
      double k2 = findKthSmallest(nums1.data(), 0, nums1.size(), nums2.data(), 0, nums2.size(), half + 1);

      return (k1 + k2) / 2;
    }

    inline double findKthSmallest(const int * const __restrict nums1, const unsigned long nums1S, const unsigned long nums1E,
                                         const int * const __restrict nums2, const unsigned long nums2S, const unsigned long nums2E,
                                         unsigned long k) noexcept {

      const unsigned long n = nums1E - nums1S;
      const unsigned long m = nums2E - nums2S;

      // If A is empty
      if (n <= 0) {
        return static_cast<double>(nums2[nums2S + k - 1]);
      }

      // If B is empty
      if (m <= 0) {
        return static_cast<double>(nums1[nums1S + k - 1]);
      }

      // If k is the first element, return the smallest element
      if (k == 1) {
        if (nums1[nums1S] < nums2[nums2S]) {
          return nums1[nums1S];
        }

        return nums2[nums2S];
      }

      const auto umid1 = (nums1S + nums1E) >> 1;
      const auto umid2 = (nums2S + nums2E) >> 1;

      const unsigned long half1 = n >> 1;
      const unsigned long half2 = m >> 1;

      // Which array's median comes first?
      if (nums1[umid1] <= nums2[umid2]) {
        // Depending on where k occurs in respect to i + j, we can discard part of an array
        if (half1 + half2 + 1 >= k) {
          // Discard B2
          return findKthSmallest(nums1, nums1S, nums1E, nums2, nums2S, umid2, k);
        }

        // Discard A1
        return findKthSmallest(nums1, umid1 + 1, nums1E, nums2, nums2S, nums2E, k - half1 - 1);
      }

      // Discard A2
      if (half1 + half2 + 1 >= k) {
        return findKthSmallest(nums1, nums1S, umid1, nums2, nums2S, nums2E, k);

      }

      // Discard B1
      return findKthSmallest(nums1, nums1S, nums1E, nums2, umid2 + 1, nums2E, k - half2 - 1);
    }
};
