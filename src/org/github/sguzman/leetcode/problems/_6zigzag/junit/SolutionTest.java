package org.github.sguzman.leetcode.problems._6zigzag.junit;

import com.sun.istack.internal.NotNull;
import org.github.sguzman.leetcode.problems._6zigzag.solution.Solution;
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

    private void assertSingleTest(@NotNull final String s, final int num, @NotNull final String expected) {
        assertNotNull(s);
        assertNotNull(expected);

        final String actual = solution.convert(s, num);
        assertEquals("String '" + s + "' with row of " + num + " produced bad string", expected, actual);
    }

    @Test
    public void testMedianTwoSortArray1() throws Exception {
        final String input = "PAYPALISHIRING";
        final int num = 3;

        final String expected = "PAHNAPLSIIGYIR";
        assertSingleTest(input, num, expected);
    }

    @Test
    public void testMedianTwoSortArray2() throws Exception {
        final String input = "ABC";
        final int num = 2;

        final String expected = "ACB";
        assertSingleTest(input, num, expected);
    }

    @Test
    public void testMedianTwoSortArray3() throws Exception {
        final String input = "ABCD";
        final int num = 2;

        final String expected = "ACBD";
        assertSingleTest(input, num, expected);
    }

    @Test
    public void testMedianTwoSortArray4() throws Exception {
        final String input = "ABCD";
        final int num = 3;

        final String expected = "ABDC";
        assertSingleTest(input, num, expected);
    }

    @Test
    public void testMedianTwoSortArray5() throws Exception {
        final String input = "ABCDE";
        final int num = 2;

        final String expected = "ACEBD";
        assertSingleTest(input, num, expected);
    }
}