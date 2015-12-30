#pragma once

struct TreeNode {
	TreeNode *left;
	TreeNode *right;
	long val;
  static constexpr const int padding4bytes{};
	TreeNode(int x) : left(NULL), right(NULL), val(static_cast<long>(x)) {}
};
