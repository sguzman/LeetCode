#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"

#include <vector>
#include <string>
#include <gtest/gtest.h>

#include "longpalinsub.hxx"

// Contains the gtest macro
#include "gtest-macro.hxx"

// Test cases
namespace {
  // gtestT(Input, Expected)
  gtestT(a, a)
  gtestT(abb, bb)
  gtestT(ccd, cc)
  gtestT(adam, ada)
  gtestT(caba, aba)
  gtestT(abcbe, bcb)
  gtestT(eabcb, bcb)
  gtestT(abadd, aba)
  gtestT(badd, dd)
  gtestT(aaa, aaa)
  gtestT(ebabc, bab)
  gtestT(bananas, anana)
  gtestT(aba, aba)
  gtestT(banana, anana)
  gtestT(aaabaaaa, aaabaaa)
  gtestT(ababaababa, ababaababa)
}

#undef gtestT
#pragma clang diagnostic pop
