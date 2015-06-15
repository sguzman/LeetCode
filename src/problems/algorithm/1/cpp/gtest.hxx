#pragma once

#include <gtest/gtest.h>
#include "twosum.hxx"

namespace {
  class TwoSumTest : public testing::Test
  {
  protected:
    TwoSumTest(void) {}
    virtual ~TwoSumTest(void) {}
    virtual void SetUp(void) {}
    virtual void TearDown(void) {}
  };

  TEST(TwoSumTest, TwoSum1)
  {
    auto actual = 0/*Solution{}.numTrees(1)*/;
    decltype(actual) expected = 1;

    EXPECT_EQ(expected, actual);
  }
}
