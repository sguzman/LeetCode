#pragma once

#include <gtest/gtest.h>

namespace {
  template <typename A>
  using conref = const A&;

  template <typename A, typename B>
  testing::AssertionResult linkedMatch(A* expected, B* actual) {
    A* a{expected};
    B* b{actual};

    for (; a != nullptr && b != nullptr; (a = a->next), b = b->next) {
      if (a->val != b->val)
        return testing::AssertionFailure() << "actual (" << b->val << ") != expected (" << a->val << ")";
    }

    if (a != b) {
      return testing::AssertionFailure() << "Size of expected and actual arrays do not match";
    }

    return testing::AssertionSuccess();
  }

  template <typename A>
  inline testing::AssertionResult linkedMatch(conref<A> expected, conref<A> actual) {
    return ::linkedMatch<A, A>(expected, actual);
  }
}
