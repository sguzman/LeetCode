#pragma once

#define gtestT(Input, Output) TEST(MedianOfTwoSortedArraysTest, Median_##Input##_##Output)\
{\
  auto input = string{#Input};\
\
  const auto actual = Solution{}.longestPalindrome(input);\
  decltype(actual) expected = #Output;\
\
  EXPECT_EQ(expected, actual) << "Input: " << input << ", Output: " << expected;\
}
