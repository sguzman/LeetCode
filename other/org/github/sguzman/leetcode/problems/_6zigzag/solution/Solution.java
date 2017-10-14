package org.github.sguzman.leetcode.problems._6zigzag.solution;

public class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1 || s.length() == 1) {
            return s;
        }

        final int gap = 2 * numRows - 2;
        StringBuilder string = new StringBuilder(s.length());

        for (int i = 0; i < numRows; ++i) {
            int count = 2 * i;
            for (int j = i; j < s.length(); j += count) {
                string.append(s.charAt(j));

                if (count == gap) {
                    count = gap;
                } else {
                    count = gap - count;
                }
            }
        }

        return string.toString();
    }
}