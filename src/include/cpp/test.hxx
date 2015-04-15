#pragma once

#include <iostream>
#include <string>

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
  static void assertEquals(const char* const msg, A expected, A actual) {
    if (expected == actual) {
      cout << "SUCCESS:" << endl
           << "\texpected(" << expected << ") ";
    } else {
      cout << "FAILURE:" << endl
           << "\t" << msg << "expected(" << expected << ") !";
    }

    cout << "= actual(" << actual << ")." << endl;
  }

  template <typename A>
  static void assertEquals(std::string msg, A expected, A actual) {
    Test::assertEquals<A>(msg.c_str(), expected, actual);
  }

  template <typename A>
  static void assertEquals(A expected, A actual) {
    Test::assertEquals<A>("", expected, actual);
  }
};
