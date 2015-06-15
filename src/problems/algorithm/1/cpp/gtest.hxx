#pragma once

#include <vector>
#include <gtest/gtest.h>

#include "../../../../include/cpp/gtest-array.hxx"
#include "twosum.hxx"

using std::vector;

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
    vector<int> input{2, 7, 11, 15};
    auto actual = Solution{}.twoSum(input, 9);
    vector<int> expected{1, 2};

    EXPECT_TRUE(arrayMatch(expected, actual));
  }
}
