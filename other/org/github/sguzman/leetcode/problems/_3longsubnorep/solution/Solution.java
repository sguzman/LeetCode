package org.github.sguzman.leetcode.problems._3longsubnorep.solution;

import java.util.HashMap;
import java.util.Map;

public class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> map = new HashMap<>();

        if (s.length() < 2) {
            return s.length();
        }

        int max = 0, curr = 0, startIdx = 0;

        for (int idx = 0; idx < s.length(); ++idx) {
            char ch = s.charAt(idx);

            if (map.containsKey(ch) && map.get(ch) >= startIdx) {
                startIdx = map.get(ch) + 1;
                map.put(ch, idx);
                curr = idx - startIdx + 1;
                max = Math.max(max, curr);
            } else {
                map.put(ch, idx);
                ++curr;
                max = Math.max(max, curr);
            }
        }

        return max;
    }
}