#pragma once

#include <stack>
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
    static auto has_path_sum(TreeNode *root,
                             const int32_t target) -> bool {
        if (root == nullptr) return false;

        std::stack<TreeNode*> node_stack;
        std::stack<int32_t> sum_stack;

        node_stack.push(root);
        sum_stack.push(target - root->value);

        while (!node_stack.empty()) {
            TreeNode *current_node = node_stack.top();
            node_stack.pop();
            int32_t current_sum = sum_stack.top();
            sum_stack.pop();

            if (!current_node->left && !current_node->right && current_sum == 0) {
                return true;
            } if (current_node->left) {
                node_stack.push(current_node->left);
                sum_stack.push(current_sum -
                    current_node->left->value);
            } if (current_node->right) {
                node_stack.push(current_node->right);
                sum_stack.push(current_sum -
                    current_node->right->value);
            }
        }

        return false;
    }
};
