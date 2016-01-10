package org.github.sguzman.leetcode.problems._4mediansortarr.solution;

import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class Solution {
    public double findMedianSortedArrays(int[] numsA, int[] numsB) {
        List<Integer> nums1 = IntStream.of(numsA).boxed().collect(Collectors.toList());
        List<Integer> nums2 = IntStream.of(numsB).boxed().collect(Collectors.toList());

        if ((nums1.size() + nums2.size()) % 2 == 0) {
            double r1 = (double) findKthElement(nums1, nums2, (nums1.size() + nums2.size()) / 2);
            double r2 = (double) findKthElement(nums1, nums2, ((nums1.size() + nums2.size()) / 2) + 1);

            return (r1 + r2) / 2;
        }

        return (double) findKthElement(nums1, nums2, (nums1.size() + nums2.size() + 1) / 2);
    }

    private static int findKthElement(List<Integer> nums1, List<Integer> nums2, int k) {
        if (nums1.size() == 0) {
            return nums2.get(k - 1);
        }

        if (nums2.size() == 0) {
            return nums1.get(k - 1);
        }

        if (k == 1) {
            if (nums1.get(0) < nums2.get(0)) {
                return nums1.get(0);
            }

            return nums2.get(0);
        }

        final int i = nums1.size() / 2;
        final int j = nums2.size() / 2;

        if ((nums1.size() / 2) + (nums2.size() / 2) + 1 >= k) {
            if (nums1.get(i) <= nums2.get(j)) {
                return findKthElement(nums1, nums2.subList(0, j), k);
            }

            return findKthElement(nums1.subList(0, i), nums2, k);
        }

        if (nums1.get(i) <= nums2.get(j)) {
            return findKthElement(nums1.subList(i + 1, nums1.size()), nums2, k - i - 1);
        }

        return findKthElement(nums1, nums2.subList(j + 1, nums2.size()), k - j - 1);
    }
}