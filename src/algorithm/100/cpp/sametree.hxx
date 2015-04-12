#pragma once

#include "../../../include/cpp/TreeNode.hxx"

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	bool isSameTree(TreeNode *p, TreeNode *q) {
		if (bothNull(p, q)) {
			return true;
		} else if (isNodeNotSame(p, q)) {
			return false;
		} else {
			return isEqual(p, q) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
		}
	}

private:
	static inline bool isEqual(TreeNode *p, TreeNode *q) {
		return isLeftSame(p, q) && isRightSame(p, q) && isDataSame(p, q);
	}

	static inline bool bothNull(TreeNode *p, TreeNode *q) {
		return p == NULL && q == NULL;
	}

	static inline bool isNodeNotSame(TreeNode *p, TreeNode *q) {
		return !Solution::isNodeSame(p, q);
	}

	// Assume we've proven they both cannot be NULL
	static inline bool isNodeSame(TreeNode *p, TreeNode *q) {
		return (p != NULL && q != NULL) || p == q;
	}

	static inline bool isLeftSame(TreeNode *p, TreeNode *q) {
		return Solution::isNodeSame(p->left, q->left);
	}

	static inline bool isRightSame(TreeNode *p, TreeNode *q) {
		return Solution::isNodeSame(p->right, q->right);
	}

	static inline bool isDataSame(TreeNode *p, TreeNode *q) {
		return p->val == q->val;
	}
};
