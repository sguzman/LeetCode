package org.github.sguzman.leetcode.problems._2addtwonumbers.junit;

import org.github.sguzman.leetcode.problems._2addtwonumbers.solution.Solution;
import org.github.sguzman.leetcode.util.ListNode;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import static org.junit.Assert.*;

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

    private void checkEqual(ListNode inputA, ListNode inputB) {
        if (inputA == null && inputB == null) {
            return;
        }

        assertNotEquals("InputA is null", inputA);
        assertNotEquals("InputB is null", inputB);

        ListNode a, b;
        for (a = inputA, b = inputB; a != null && b != null; a = a.next, b = b.next) {
            assertEquals("Value for same node are not equal", a.val, b.val);
        }

        assertNull("InputA is longer than expected", a);
        assertNull("InputB is longer than expected", b);
    }

    private void assertSingleTest(ListNode inputA, ListNode inputB, ListNode expected) {
        assertNotNull("InputA is null", inputA);
        assertNotNull("InputB is null", inputB);
        assertNotNull("Expected is null", expected);

        final ListNode actual = solution.addTwoNumbers(inputA, inputB);

        checkEqual(expected, actual);
    }

    private ListNode initFromArgs(int... Args) {
        int[] args = Args.clone();
        ListNode list = new ListNode(-1);
        ListNode curr = list;

        list.val = args[0];

        for (int idx = 1; idx < args.length; ++idx) {
            int val = args[idx];
            curr.next = new ListNode(val);
            curr = curr.next;
        }

        return list;
    }

    @Test
    public void testAddTwoNumbers1() throws Exception {
        ListNode inputA = initFromArgs(2, 4, 3);
        ListNode inputB = initFromArgs(5, 6, 4);

        ListNode expected = initFromArgs(7, 0, 8);

        assertSingleTest(inputA, inputB, expected);
    }

    @Test
    public void testAddTwoNumbers2() throws Exception {
        ListNode inputA = initFromArgs(2);
        ListNode inputB = initFromArgs(5);

        ListNode expected = initFromArgs(7);

        assertSingleTest(inputA, inputB, expected);
    }

}