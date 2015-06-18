#pragma once

#include <vector>
#include <gtest/gtest.h>

#include "longestsubstrworep.hxx"

using std::vector;

namespace {
  class LongestSubStringWithoutRepetitionTest : public testing::Test
  {
  protected:
    LongestSubStringWithoutRepetitionTest(void) {}
    virtual ~LongestSubStringWithoutRepetitionTest(void) {}
    virtual void SetUp(void) {}
    virtual void TearDown(void) {}
  };

  TEST(LongestSubStringWithoutRepetitionTest, TwoSum1)
  {
    EXPECT_TRUE(false);
  }
}
