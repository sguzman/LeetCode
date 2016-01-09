package org.github.sguzman.leetcode.problems.impstrstr28.kmp.solution;

import java.util.ArrayList;

public class Solution {
    /**
     * @param haystack String
     * @param needle String
     * @return int
     */
    public static int strStr(String haystack, String needle) {
        if (haystack.length() == 0 || needle.length() == 0) {
            if (needle.length() == 0) {
                return 0;
            }

            return -1;
        }

        if (haystack.length() < needle.length()) {
            return -1;
        }

        return match(haystack, needle);
    }

    /**
     * @param haystack String
     * @param needle String
     * @return int
     */
    private static int match(String haystack, String needle) {
        ArrayList<Integer> overlap = mismatch(needle);

        for (int m = 0, i = 0; m + i < haystack.length(); ) {
            if (haystack.charAt(m + i) == needle.charAt(i)) {
                if (i == needle.length() - 1) {
                    return m;
                }

                ++i;
            } else if (i > 0) {
                m += i - overlap.get(i);
                i = overlap.get(i);
            } else {
                ++m;
            }
        }

        return -1;
    }

    /**
     * @param needle String
     * @return ArrayList<Integer>
     */
    private static ArrayList<Integer> mismatch(String needle) {
        ArrayList<Integer> table = new ArrayList<>(needle.length());
        table.add(-1);
        table.add(0);

        for (int count = 2, prefixLen = 0; count < needle.length(); ) {
            if (needle.charAt(count - 1) == needle.charAt(prefixLen)) {
                table.add(++prefixLen);
                ++count;
            } else if (prefixLen > 0) {
                prefixLen = table.get(prefixLen);
            } else {
                table.add(0);
                ++count;
            }
        }

        return table;
    }
}