package org.github.sguzman.leetcode.problems._3longsubnorep.junit;

import org.github.sguzman.leetcode.problems._3longsubnorep.solution.Solution;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;

public class SolutionTest {
    Solution solution;

    @Before
    public void setUp() throws Exception {
        solution = new Solution();
    }

    @After
    public void tearDown() throws Exception {
        solution = null;
    }

    private void assertSingleTest(String s, int expected) {
        assertNotNull("String is null", s);

        final int actual = solution.lengthOfLongestSubstring(s);

        assertEquals(expected, actual);
    }

    @Test
    public void testLongestSubtringNoRepeat1() throws Exception {
        String inputA = "bbbb";
        int expected = 1;

        assertSingleTest(inputA, expected);
    }

    @Test
    public void testLongestSubtringNoRepeat2() throws Exception {
        String inputA = "abcda";
        int expected = 4;

        assertSingleTest(inputA, expected);
    }

    @Test
    public void testLongestSubtringNoRepeat3() throws Exception {
        String inputA = "c";
        int expected = 1;

        assertSingleTest(inputA, expected);
    }

    @Test
    public void testLongestSubtringNoRepeat4() throws Exception {
        String inputA = "au";
        int expected = 2;

        assertSingleTest(inputA, expected);
    }

    @Test
    public void testLongestSubtringNoRepeat5() throws Exception {
        String inputA = "aab";
        int expected = 2;

        assertSingleTest(inputA, expected);
    }

    @Test
    public void testLongestSubtringNoRepeat6() throws Exception {
        String inputA = "ccd";
        int expected = 2;

        assertSingleTest(inputA, expected);
    }

    @Test
    public void testLongestSubtringNoRepeat7() throws Exception {
        String inputA = "bdb";
        int expected = 2;

        assertSingleTest(inputA, expected);
    }

    @Test
    public void testLongestSubtringNoRepeat8() throws Exception {
        String inputA = "abcaabbc";
        int expected = 3;

        assertSingleTest(inputA, expected);
    }

    @Test
    public void testLongestSubtringNoRepeat9() throws Exception {
        String inputA = "cdd";
        int expected = 2;

        assertSingleTest(inputA, expected);
    }

    @Test
    public void testLongestSubtringNoRepeat10() throws Exception {
        String inputA = "cwf";
        int expected = 3;

        assertSingleTest(inputA, expected);
    }
}