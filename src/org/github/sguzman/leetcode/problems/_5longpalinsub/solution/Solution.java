package org.github.sguzman.leetcode.problems._5longpalinsub.solution;

public class Solution {
    public String longestPalindrome(final String s) {
        if (s.length() == 1) {
            return s;
        }

        final String pre = _preProc(s);
        final int[] P = new int[pre.length()];

        final int len1 = pre.length() - 1;
        int C = 0, R = 0, maxIdx = 0;

        for (int idx = 2; idx < len1; ++idx) {
            // Dynamic programming
            if (R > idx) {
                final int dist = R - idx;
                final int mirror = 2 * C - idx;

                P[idx] = Math.min(dist, P[mirror]);
            }

            while (pre.charAt(idx - (P[idx] + 1)) == pre.charAt(idx + (P[idx] + 1))) {
                ++P[idx];
            }

            /*if (pre.charAt(idx - 1) != pre.charAt(idx + 1)) {
                P[idx] = 0;
            }*/

            if (idx + P[idx] > R) {
                C = idx;
                R = idx + P[idx];
            }

            if (P[idx] > P[maxIdx]) {
                maxIdx = idx;
            }
        }

        final int start = (maxIdx - 1 - P[maxIdx]) / 2;

        return s.substring(start, start + P[maxIdx]);
    }

    private static String _preProc(final String s) {
        StringBuilder stringBuilder = new StringBuilder(s.length() * 2 + 3);

        stringBuilder.append("^#");
        for (int idx = 0; idx < s.length(); ++idx) {
            stringBuilder.append(s.charAt(idx)).append("#");
        }

        stringBuilder.append("$");

        return stringBuilder.toString();
    }
}