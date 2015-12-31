#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"

#include <vector>
#include <string>
#include <gtest/gtest.h>

#include "longestsubstrworep.hxx"

#define gtestL(GTESTNAME, InputStr, ExpectedInt) TEST(LongestSubStringWithoutRepetitionTest, GTESTNAME)\
{\
const std::string input{InputStr};\
\
const auto actual = Solution{}.lengthOfLongestSubstring(input);\
decltype(actual) expected = ExpectedInt;\
\
EXPECT_EQ(expected, actual);\
}

#define gtestQL(InputStr, ExpectedInt) gtestL(LongestSub_##InputStr, #InputStr, ExpectedInt)

using std::vector;

namespace {
  class LongestSubStringWithoutRepetitionTest : public testing::Test
  {
  protected:
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

  gtestQL(bbbbb, 1)
  gtestQL(abcda, 4)
  gtestQL(c, 1)
  gtestQL(au, 2)
  gtestQL(aab, 2)
  gtestQL(ccd, 2)
  gtestQL(bdb, 2)
  gtestQL(abcaabbc, 3)
  gtestQL(cdd, 2)
  gtestQL(cwf, 3)
}

#undef gtestL
#undef gtestQL
#pragma clang diagnostic pop
