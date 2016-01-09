package org.github.sguzman.leetcode.problems._1twosum.junit;

import org.github.sguzman.leetcode.problems._1twosum.solution.Solution;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import java.util.Arrays;

import static org.junit.Assert.assertArrayEquals;
import static org.junit.Assert.assertEquals;

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

    private void assertSingleTest(int[] nums, int k, int[] expected) {
        assertEquals("Expected solution not size 2", expected.length, 2);

        final int[] actual = solution.twoSum(nums, k);

        assertArrayEquals("Actual " + Arrays.toString(actual) + " does not match expected " + Arrays.toString(expected),
                expected, actual);
    }

    @Test
    public void testTwoSum1() throws Exception {
        final int[] nums = {2, 7, 11, 15};
        final int k = 9;

        final int[] expected = {1, 2};

        assertSingleTest(nums, k, expected);
    }

    @Test
    public void testTwoSum2() throws Exception {
        final int[] nums = {3, 7, 11, 15, 6, 2, 9};
        final int k = 8;

        final int[] expected = {5, 6};

        assertSingleTest(nums, k, expected);
    }

    @Test
    public void testTwoSum3() throws Exception {
        final int[] nums = {3, 7, 11, 15, 6, 2, 9};
        final int k = 24;

        final int[] expected = {4, 7};

        assertSingleTest(nums, k, expected);
    }

    @Test
    public void testTwoSum4() throws Exception {
        final int[] nums = {3, 2, 4};
        final int k = 6;

        final int[] expected = {2, 3};

        assertSingleTest(nums, k, expected);
    }

    @Test
    public void testTwoSum5() throws Exception {
        final int[] nums = {0, 4, 3, 0};
        final int k = 0;

        final int[] expected = {1, 4};

        assertSingleTest(nums, k, expected);
    }
}