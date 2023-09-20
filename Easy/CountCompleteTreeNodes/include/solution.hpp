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
    static auto count_nodes(TreeNode *root) -> int32_t {
        if (root == nullptr) return 0;

        int32_t count = 0;
        std::function<void(TreeNode*)> preorder =
                [&](TreeNode *root) -> void {
            if (root == nullptr) return;
            ++count;
            preorder(root->left);
            preorder(root->right);
        };

        preorder(root);
        return count;
    }
};
