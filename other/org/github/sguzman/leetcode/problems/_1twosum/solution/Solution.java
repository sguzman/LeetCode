package org.github.sguzman.leetcode.problems._1twosum.solution;

import java.util.HashMap;
import java.util.Map;

/**
 * 1. Two Sum My Submissions Question
 Total Accepted: 172506 Total Submissions: 852698 Difficulty: Medium
 Given an array of integers, find two numbers such that they add up to a specific target number.

 The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

 You may assume that each input would have exactly one solution.

 Input: numbers={2, 7, 11, 15}, target=9
 Output: index1=1, index2=2
 */
public class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        // Contains the final indices
        int[] idxs = new int[2];

        for (int idx = 0; idx < nums.length; ++idx) {
            if (!map.containsKey(nums[idx])) {
                map.put(target - nums[idx], idx);
            } else {
                idxs[0] = map.get(nums[idx]) + 1;
                idxs[1] = idx + 1;

                break;
            }
        }

        return idxs;
    }
}