package org.github.sguzman.leetcode.problems._4mediansortarr.junit;

import com.sun.istack.internal.NotNull;
import org.github.sguzman.leetcode.problems._4mediansortarr.solution.Solution;
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

    private static final double delta = .001;

    private void assertSingleTest(@NotNull int[] inputA, @NotNull int[] inputB, double expected) {
        assertNotNull(inputA);
        assertNotNull(inputB);

        final double actual = solution.findMedianSortedArrays(inputA, inputB);
        assertEquals(expected, actual, delta);
    }

    @Test
    public void testMedianTwoSortArray1() throws Exception {
        int[] inputA = {1, 3, 5};
        int[] inputB = {2, 4, 6};

        final double expected = 3.5;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray2() throws Exception {
        final int[] inputA = {1, 2, 3};
        final int[] inputB = {};

        final double expected = 2;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray3() throws Exception {
        final int[] inputA = {};
        final int[] inputB = {1};

        final double expected = 1;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray4() throws Exception {
        final int[] inputA = {2};
        final int[] inputB = {};

        final double expected = 2;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray5() throws Exception {
        final int[] inputA = {};
        final int[] inputB = {2, 3};

        final double expected = 2.5;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray6() throws Exception {
        final int[] inputA = {3, 4};
        final int[] inputB = {};

        final double expected = 3.5;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray7() throws Exception {
        final int[] inputA = {1, 2, 3, 4};
        final int[] inputB = {};

        final double expected = 2.5;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray8() throws Exception {
        final int[] inputA = {};
        final int[] inputB = {2, 3, 4, 5};

        final double expected = 3.5;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray9() throws Exception {
        final int[] inputA = {1, 4, 5, 6, 26};
        final int[] inputB = {2, 13, 34};

        final double expected = 5.5;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray10() throws Exception {
        final int[] inputA = {1, 3};
        final int[] inputB = {2};

        final double expected = 2;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray11() throws Exception {
        final int[] inputA = {1, 1, 1};
        final int[] inputB = {1};

        final double expected = 1;
        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testMedianTwoSortArray12() throws Exception {
        final int[] inputA = {1, 1, 1};
        final int[] inputB = {1, 1, 1};

        final double expected = 1;
        assertSingleTest(inputA, inputB, expected);
    }
}