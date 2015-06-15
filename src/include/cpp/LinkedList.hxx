#pragma once

#include <gtest/gtest.h>

inline namespace {
  template <typename A>
  using conref = const A&;

  template <typename A, typename B, typename C>
  testing::AssertionResult linkedMatch(conref<A> expected, conref<B> actual, A* (*getNextA) (A*),  B* (*getNextB) (B*)) {
    A* a{getNextA(&expected)};
    B* b{getNextB(&actual)};

    for (; a != nullptr && b != nullptr; a = getNextA(a)) {
      if (a->val != b->val)
        return testing::AssertionFailure() << "actual (" << b->val << ") != expected (" << a->val << ")";
    }

    if (a != b) {
      return testing::AssertionFailure() << "Size of expected and actual arrays do not match";
    }

    return testing::AssertionSuccess();
  }

  template <typename A, typename C>
  inline testing::AssertionResult linkedMatch(conref<A> expected, conref<A> actual, C* (*getNextA) (conref<A>),  C* (*getNextB) (conref<A>)) {
    return ::linkedMatch<A, A, C>(expected, actual, getNextA, getNextB);
  }

  template <typename A, typename C>
  inline testing::AssertionResult linkedMatch(conref<A> expected, conref<A> actual, C* (*getNextA) (conref<A>)) {
    return ::linkedMatch<A, A, C>(expected, actual, getNextA, getNextA);
  }
}
