#pragma once

#include <vector>
#include <string>
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

  TEST(LongestSubStringWithoutRepetitionTest, LongestSub1)
  {
    const std::string input{"abcabcbb"};

    const auto actual = Solution{}.lengthOfLongestSubstring(input);
    decltype(actual) expected = 3;

    EXPECT_EQ(expected, actual);
  }

  TEST(LongestSubStringWithoutRepetitionTest, LongestSub2)
  {
    const std::string input{"bbbbb"};

    const auto actual = Solution{}.lengthOfLongestSubstring(input);
    decltype(actual) expected = 1;

    EXPECT_EQ(expected, actual);
  }

  TEST(LongestSubStringWithoutRepetitionTest, LongestSub3)
  {
    const std::string input{"abcda"};

    const auto actual = Solution{}.lengthOfLongestSubstring(input);
    decltype(actual) expected = 4;

    EXPECT_EQ(expected, actual);
  }


}
