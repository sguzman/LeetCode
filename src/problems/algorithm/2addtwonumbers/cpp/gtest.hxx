#pragma once

#include <vector>
#include <gtest/gtest.h>

#include "../../../../include/cpp/LinkedList.hxx"
#include "../../../../include/cpp/ListNode.hxx"
#include "addtwonumbers.hxx"

using std::vector;

namespace {
  class AddTwoNumbersTest : public testing::Test
  {
  protected:
    AddTwoNumbersTest(void) {}
    virtual ~AddTwoNumbersTest(void) {}
    virtual void SetUp(void) {}
    virtual void TearDown(void) {}
  };

  TEST(AddTwoNumbersTest, TwoSum1)
  {
    ListNode* input1 = new ListNode(2);
    input1->next = new ListNode(4);
    input1->next->next = new ListNode(3);

    ListNode* input2 = new ListNode(5);
    input2->next = new ListNode(6);
    input2->next->next = new ListNode(4);

    ListNode* actual = Solution{}.addTwoNumbers(input1, input2);

    ListNode* expected = new ListNode(7);
    expected->next = new ListNode(0);
    expected->next->next = new ListNode(8);

    EXPECT_TRUE(linkedMatch<ListNode>(expected, actual));
  }

  TEST(AddTwoNumbersTest, TwoSum2)
  {
    ListNode* input1 = new ListNode(1);
    input1->next = new ListNode(8);

    ListNode* input2 = new ListNode(0);

    ListNode* actual = Solution{}.addTwoNumbers(input1, input2);

    ListNode* expected = new ListNode(1);
    expected->next = new ListNode(8);

    EXPECT_TRUE(linkedMatch<ListNode>(expected, actual));
  }
}
