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
    static auto leaf_similar(TreeNode *first, TreeNode *second) -> bool {
        std::string first_leaf, second_leaf;

        std::function<void(TreeNode*, std::string&)> preorder =
                [&](TreeNode *root, std::string &leaf) -> void {
            if (root == nullptr) return;
            if (!root->left && !root->right) {
                leaf.push_back(static_cast<char>(root->value));
            }
            preorder(root->left, leaf);
            preorder(root->right, leaf);
        };

        preorder(first, first_leaf);
        preorder(second, second_leaf);

        return first_leaf == second_leaf;
    }
};
