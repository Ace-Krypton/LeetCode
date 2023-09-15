#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

struct TreeNode {
    int32_t value;
    TreeNode *left;
    TreeNode *right;
    explicit TreeNode(int32_t value) :
        value(value), left(nullptr), right(nullptr) { }
};

class Solution {
public:
    static auto max_depth(TreeNode *root) -> int32_t {
        int32_t count = 0;
        static std::function<int32_t(TreeNode*, int32_t)> traverse =
                [&](TreeNode *node, int32_t max_depth) -> int32_t {
            if (node == nullptr) return max_depth;
            ++max_depth;
            return std::max(traverse(node->left, max_depth),
                            traverse(node->right, max_depth));
        };
        return traverse(root, count);
    }
};
