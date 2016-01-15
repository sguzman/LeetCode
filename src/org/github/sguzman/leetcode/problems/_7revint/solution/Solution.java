package org.github.sguzman.leetcode.problems._7revint.solution;

public class Solution {
    public int reverse(int x) {
        final StringBuilder str = new StringBuilder();

        try {
            if (x < 0) {
                str.append(-x);
                return Integer.parseInt('-' + str.reverse().toString());
            }

            str.append(x);
            return Integer.parseInt(str.reverse().toString());
        } catch (NumberFormatException e) {
            return 0;
        }
    }
}