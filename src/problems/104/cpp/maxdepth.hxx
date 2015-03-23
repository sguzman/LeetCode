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
    int maxDepth(TreeNode *root) {
        return spelunk(root, 0);
    }

private:
    static inline int spelunk(TreeNode* node, int depth) {
        if (node == NULL) {
            return depth;
        }

        int left = spelunk(node->left, depth + 1);
        int right = spelunk(node->right, depth + 1);

        if (left > right) {
            return left;
        }

        return right;
    }
};
