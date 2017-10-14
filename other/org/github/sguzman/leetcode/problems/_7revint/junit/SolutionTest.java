package org.github.sguzman.leetcode.problems._7revint.junit;

import com.sun.istack.internal.NotNull;
import org.github.sguzman.leetcode.problems._7revint.solution.Solution;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

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

    private void assertSingleTest(final int num, @NotNull final int expected) {
        final int actual = solution.reverse(num);
        assertEquals(expected, actual);
    }

    @Test
    public void testReverseInt1() throws Exception {
        assertSingleTest(123, 321);
    }

    @Test
    public void testReverseInt2() throws Exception {
        assertSingleTest(12, 21);
    }

    @Test
    public void testReverseInt3() throws Exception {
        assertSingleTest(1534236469, 0);
    }
}