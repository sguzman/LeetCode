#pragma once

#include <gtest/gtest.h>

template <typename T, template <class...> typename A, template <class...> typename B>
testing::AssertionResult ArraysMatch(const A<T>& expected, const A<T>& actual) {
  auto expectedLength = expected.size();
  auto actualLength = actual.size();

  if (expectedLength != actualLength) {
    return testing::AssertionFailure() << "Size of expected and actual arrays do not match";
  }

  for (size_t i{}; i < expectedLength; ++i)
    if (expected[i] != actual[i])
      return testing::AssertionFailure() << "array[" << i
             << "] (" << actual[i] << ") != expected[" << i
             << "] (" << expected[i] << ")";

  return testing::AssertionSuccess();
}
