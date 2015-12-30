#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"

#include <gtest/gtest.h>
#include "uniquebst.hxx"

namespace {
  class UniqueBSTTest : public testing::Test
  {
  protected:
    virtual ~UniqueBSTTest(void) {}
    virtual void SetUp(void) {}
    virtual void TearDown(void) {}
  };

  TEST(UniqueBSTTest, Unique1)
  {
    auto actual = Solution{}.numTrees(1);
    decltype(actual) expected = 1;

    EXPECT_EQ(expected, actual);
  }

  TEST(UniqueBSTTest, Unique2)
  {
    auto actual = Solution{}.numTrees(2);
    decltype(actual) expected = 2;

    EXPECT_EQ(expected, actual);
  }

  TEST(UniqueBSTTest, Unique3)
  {
    auto actual = Solution{}.numTrees(3);
    decltype(actual) expected = 5;

    EXPECT_EQ(expected, actual);
  }

  TEST(UniqueBSTTest, Unique4)
  {
    auto actual = Solution{}.numTrees(4);
    decltype(actual) expected = 14;

    EXPECT_EQ(expected, actual);
  }

  TEST(UniqueBSTTest, Unique5)
  {
    auto actual = Solution{}.numTrees(5);
    decltype(actual) expected = 42;

    EXPECT_EQ(expected, actual);
  }

  TEST(UniqueBSTTest, Unique6)
  {
    auto actual = Solution{}.numTrees(6);
    decltype(actual) expected = 132;

    EXPECT_EQ(expected, actual);
  }

  TEST(UniqueBSTTest, Unique7)
  {
    auto actual = Solution{}.numTrees(7);
    decltype(actual) expected = 429;

    EXPECT_EQ(expected, actual);
  }
}

#pragma clang diagnostic pop
