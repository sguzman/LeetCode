#pragma once

#include "../../../../include/cpp/ListNode.hxx"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* solution = new ListNode{0};
    ListNode* curr = solution;

    ListNode* linkA = l1, * linkB = l2;

    int sum;
    bool isGreater10{false};
    while (linkA != nullptr || linkB != nullptr) {
      if (isGreater10) {
        sum = 1;
      } else {
        sum = 0;
      }

      if (linkA != nullptr) {
        sum += linkA->val;
        linkA = linkA->next;
      }

      if (linkB != nullptr) {
        sum += linkB->val;
        linkB = linkB->next;
      }

      isGreater10 = sum > 9;

      if (isGreater10) {
        sum -= 10;
      }

      curr->val = sum;

      if (linkA != nullptr || linkB != nullptr) {
        curr->next = new ListNode{1};
        curr = curr->next;
      }
    }

    if (isGreater10) {
      curr->next = new ListNode{1};
    }

    return solution;
  }
};
