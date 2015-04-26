#pragma once

#include <iostream>
#include <string>
#include <cassert>
#include <exception>

using std::cout;
using std::endl;

struct Test final {
  template <typename... A>
  explicit Test(A...) = delete;

  template <typename A>
  void operator=(A) = delete;

  template <typename A>
  operator A(void) = delete;

  template <typename A>
  static inline bool assertEquals(const char* const msg, A expected, A actual) {
    bool ret = expected == actual;

    if (ret) {
      cout << "SUCCESS:" << endl
           << "\texpected(" << expected << ") ";
    } else {
      cout << "FAILURE:" << endl
           << "\t" << msg << "expected(" << expected << ") !";
    }

    cout << "= actual(" << actual << ")." << endl;

    return ret;
  }

  template <typename A>
  static inline bool assertEquals(std::string msg, A expected, A actual) {
    return Test::assertEquals<A>(msg.c_str(), expected, actual);
  }

  template <typename A>
  static inline bool assertEquals(A expected, A actual) {
    return Test::assertEquals<A>("", expected, actual);
  }

  template <typename C, template <class...> class A, template <class...> class B>
  static inline void assertEquals(const A<C>& expected, const B<C>& actual) {
    assert(expected.size() == actual.size());
    auto success = 0, failure = 0;

    for (auto iter1 = expected.cbegin(), iter2 = actual.cbegin();
         iter1 != expected.cend() && iter2 != actual.cend(); ++iter1, ++iter2) {
      if (Test::assertEquals<C>(*iter1, *iter2)) {
        ++success;
      } else {
        ++failure;
      }
    }

    cout << "Success: " << success << endl
         << "Failure: " << failure << endl;
  }

};
