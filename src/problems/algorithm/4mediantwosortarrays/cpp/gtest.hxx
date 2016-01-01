#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"

#include <vector>
#include <string>
#include <gtest/gtest.h>

#include "4mediantwosortarrays.hxx"
#include "../../../../include/cpp/pretty_print.hxx"

constexpr static int inc{-1};

#define VEC(...) std::vector<int>{__VA_ARGS__}

#define gtestT(Num, VEC1, VEC2, EXPECTEDDOUBLE) TEST(MedianOfTwoSortedArraysTest, Median##Num)\
{\
  auto input1 = VEC1;\
  auto input2 = VEC2;\
\
  const auto actual = Solution{}.findMedianSortedArrays(input1, input2);\
  decltype(actual) expected = EXPECTEDDOUBLE;\
\
  EXPECT_DOUBLE_EQ(expected, actual) << "Nums1: " << input1 << ", Nums2:" << input2;\
}

#define EVAL ++inc

using std::vector;

// Test cases
namespace {
  gtestT(1, VEC(1, 3, 5, 7), VEC(2, 4, 6, 8), 4.5)
  gtestT(2, VEC(1, 2, 3), VEC(), 2.0)
  gtestT(3, VEC(), VEC(1), 1.0)
  gtestT(4, VEC(2), VEC(), 2.0)
  gtestT(5, VEC(), VEC(2, 3), 2.5)
  gtestT(6, VEC(3, 4), VEC(), 3.5)
  gtestT(7, VEC(), VEC(1, 2, 3, 4), 2.5)
  gtestT(8, VEC(2, 3, 4, 5), VEC(), 3.5)
  gtestT(9, VEC(1, 4, 5, 6, 26), VEC(2, 13, 34), 5.5)
  gtestT(10, VEC(1, 3), VEC(2), 2.0)

}

#undef VEC
#undef gtestT
#pragma clang diagnostic pop
