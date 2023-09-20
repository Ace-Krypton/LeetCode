#pragma once

#include <cmath>
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
        if (!root) return 0;

        std::function<int32_t(TreeNode*)> lh =
                [&](TreeNode *root) -> int32_t {
                    if (!root) return 0;
                    return lh(root->left) + 1;
                };

        std::function<int32_t(TreeNode*)> rh =
                [&](TreeNode *root) -> int32_t {
                    if (!root) return 0;
                    return rh(root->right) + 1;
                };

        const int32_t left_height = lh(root);
        const int32_t right_height = rh(root);

        if (left_height == right_height) {
            return std::pow(2, left_height) - 1;
        }

        return count_nodes(root->left) + count_nodes(root->right) + 1;
    }

    [[maybe_unused]] static auto count_nodes_tle(TreeNode *root) -> int32_t {
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
