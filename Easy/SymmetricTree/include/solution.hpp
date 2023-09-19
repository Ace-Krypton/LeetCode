#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

struct TreeNode {
    const int32_t value;
    TreeNode *left;
    TreeNode *right;
    explicit TreeNode(int32_t value) :
        value(value), left(nullptr), right(nullptr) { }
};

class Solution {
public:
    static auto is_symmetric(TreeNode *root) -> bool {
        std::function<bool(TreeNode *left, TreeNode *right)> dfs =
                [&](TreeNode *left, TreeNode *right) -> bool {
            if (left == nullptr && right == nullptr) return true;
            if (left == nullptr || right == nullptr) return false;
            return left->value == right->value
                && dfs(left->left, right->right)
                && dfs(left->right, right->left);
        };

        return dfs(root->left, root->right);
    }
};
