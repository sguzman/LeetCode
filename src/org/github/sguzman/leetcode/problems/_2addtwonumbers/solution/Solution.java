package org.github.sguzman.leetcode.problems._2addtwonumbers.solution;

import org.github.sguzman.leetcode.util.ListNode;

/**
 * 2. Add Two Numbers My Submissions Question
 Total Accepted: 111914 Total Submissions: 515159 Difficulty: Medium
 You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
 */
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode solution = new ListNode(0);
        ListNode curr = solution;

        ListNode linkA = l1, linkB = l2;

        int sum;
        boolean isGreater10 = false;
        while (linkA != null || linkB != null) {
            if (isGreater10) {
                sum = 1;
            } else {
                sum = 0;
            }

            if (linkA != null) {
                sum += linkA.val;
                linkA = linkA.next;
            }

            if (linkB != null) {
                sum += linkB.val;
                linkB = linkB.next;
            }

            isGreater10 = sum > 9;

            if (isGreater10) {
                sum -= 10;
            }

            curr.val = sum;

            if (linkA != null || linkB != null) {
                curr.next = new ListNode(1);
                curr = curr.next;
            }
        }

        if (isGreater10) {
            curr.next = new ListNode(1);
        }

        return solution;
    }
}