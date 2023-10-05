#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

struct TreeNode {
    const int32_t value;
    TreeNode *left;
    TreeNode *right;
    explicit TreeNode(const int32_t value) :
        value(value), left(nullptr), right(nullptr) { }
};

class Solution {
public:
    static auto good_nodes(TreeNode *root) -> size_t {
        std::function<void(TreeNode*, int32_t)> preorder =
                [&](TreeNode *node, int32_t curr_max) -> void {
            if (node == nullptr) return;
            if (node->value >= curr_max) {
                ++_count;
                curr_max = node->value;
            }
            preorder(node->left, curr_max);
            preorder(node->right, curr_max);
        };

        preorder(root, root->value);
        return _count;
    }

private:
    static size_t _count;
};
