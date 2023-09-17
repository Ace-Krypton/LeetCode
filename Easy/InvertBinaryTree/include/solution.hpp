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
    static auto invert_tree(TreeNode *root) -> TreeNode* {
        std::function<void(TreeNode*)> preorder =
                [&](TreeNode *node) -> void {
            if (node == nullptr) return;
            TreeNode *holder = node->right;
            node->right = node->left;
            node->left = holder;
            preorder(node->left);
            preorder(node->right);
        };

        preorder(root);
        return root;
    }

    static auto print(TreeNode *root) -> void {
        std::function<void(TreeNode*)> preorder =
                [&](TreeNode *node) -> void {
            if (node == nullptr) return;
            std::cout << node->value;
            preorder(node->right);
            preorder(node->left);
        };

        preorder(root);
    }
};
