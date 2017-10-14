package org.github.sguzman.leetcode.problems._5longpalinsub.junit;

import com.sun.istack.internal.NotNull;
import org.github.sguzman.leetcode.problems._5longpalinsub.solution.Solution;
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

    private void assertSingleTest(@NotNull final String s, @NotNull final String expected) {
        assertNotNull(s);
        assertNotNull(expected);

        final String actual = solution.longestPalindrome(s);
        assertEquals(expected, actual);
    }

    @Test
    public void testMedianTwoSortArray1() throws Exception {
        final String input = "b";
        final String expected = "b";

        assertSingleTest(input, expected);
    }

    @Test
    public void testMedianTwoSortArray2() throws Exception {
        final String input = "a";
        final String expected = "a";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray3() throws Exception {
        final String input = "abb";
        final String expected = "bb";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray4() throws Exception {
        final String input = "ccd";
        final String expected = "cc";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray5() throws Exception {
        final String input = "adam";
        final String expected = "ada";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray6() throws Exception {
        final String input = "caba";
        final String expected = "aba";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray7() throws Exception {
        final String input = "abcbe";
        final String expected = "bcb";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray8() throws Exception {
        final String input = "eabcb";
        final String expected = "bcb";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray9() throws Exception {
        final String input = "abadd";
        final String expected = "aba";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray10() throws Exception {
        final String input = "badd";
        final String expected = "dd";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray11() throws Exception {
        final String input = "aaa";
        final String expected = "aaa";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray12() throws Exception {
        final String input = "ebabc";
        final String expected = "bab";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray13() throws Exception {
        final String input = "bananas";
        final String expected = "anana";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray14() throws Exception {
        final String input = "aba";
        final String expected = "aba";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray15() throws Exception {
        final String input = "banana";
        final String expected = "anana";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray16() throws Exception {
        final String input = "aaabaaaa";
        final String expected = "aaabaaa";

        assertSingleTest(input, expected);
    }
    @Test
    public void testMedianTwoSortArray17() throws Exception {
        final String input = "ababaababa";
        final String expected = "ababaababa";

        assertSingleTest(input, expected);
    }

    @Test
    public void testMedianTwoSortArray18() throws Exception {
        final String input = "tfekavrnnptlawqponffseumswvdtjhrndkkjppgiajjhklqpskuubeyofqwubiiduoylurzlorvnfcibxcjjzvlzfvsvwknjkzwthxxrowidmyudbtquktmyunoltklkdvzplxnpkoiikfijgulbxfxhaxnldvwmzpgaiumnvpdirlrutsqenwtihptnhghobrmmzcsrhqgdgzrvvitzgsolsxjxfeencvpnltxeetmtzlwnhlvgtbhkicivylfjhhfqteyxewmnewhmsnfdyneqoywgsgptwdlzbraksgajciebdchindegdfmayvfkwwkkfyxqjcv";
        final String expected = "kwwk";

        assertSingleTest(input, expected);
    }


}