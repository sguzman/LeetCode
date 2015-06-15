#pragma once

#include <vector>
#include <gtest/gtest.h>

#include "../../../../include/cpp/gtest-array.hxx"
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
    EXPECT_TRUE(true);
  }
}
