#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"

#include <vector>
#include <gtest/gtest.h>

#include "../../../../include/cpp/gtest-array.hxx"
#include "../../../../include/cpp/pretty_print.hxx"
#include "twosum.hxx"

using std::vector;

namespace {
  class TwoSumTest : public testing::Test
  {
  protected:
    virtual ~TwoSumTest(void) {}
    virtual void SetUp(void) {}
    virtual void TearDown(void) {}
  };

  TEST(TwoSumTest, TwoSum1)
  {
    vector<int> input{2, 7, 11, 15};
    auto actual = Solution{}.twoSum(input, 9);
    vector<int> expected{1, 2};

    EXPECT_TRUE(arrayMatch(expected, actual)) << "Actual array (" << actual << ") did not match expected array (" << expected << ").";
  }

  TEST(TwoSumTest, TwoSum2)
  {
    vector<int> input{3, 7, 11, 15, 6, 2, 9};
    auto actual = Solution{}.twoSum(input, 8);
    vector<int> expected{5, 6};

    EXPECT_TRUE(arrayMatch(expected, actual)) << "Actual array (" << actual << ") did not match expected array (" << expected << ").";
  }

  TEST(TwoSumTest, TwoSum3)
  {
    vector<int> input{3, 7, 11, 15, 6, 2, 9};
    auto actual = Solution{}.twoSum(input, 24);
    vector<int> expected{4, 7};

    EXPECT_TRUE(arrayMatch(expected, actual)) << "Actual array (" << actual << ") did not match expected array (" << expected << ").";
  }

  TEST(TwoSumTest, TwoSum4)
  {
    vector<int> input{3, 2, 4};
    auto actual = Solution{}.twoSum(input, 6);
    vector<int> expected{2, 3};

    EXPECT_TRUE(arrayMatch(expected, actual)) << "Actual array (" << actual << ") did not match expected array (" << expected << ").";
  }

  TEST(TwoSumTest, TwoSum5)
  {
    vector<int> input{0, 4, 3, 0};
    auto actual = Solution{}.twoSum(input, 0);
    vector<int> expected{1, 4};

    EXPECT_TRUE(arrayMatch(expected, actual)) << "Actual array (" << actual << ") did not match expected array (" << expected << ").";
  }
}

#pragma clang diagnostic pop
