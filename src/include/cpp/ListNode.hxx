#pragma once

//Definition for singly-linked list.
struct ListNode {
  ListNode* next;
  long val;
  ListNode(int x) : next(nullptr), val(x) {}
};
