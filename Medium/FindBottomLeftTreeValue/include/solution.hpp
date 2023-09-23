#pragma once

#include <queue>
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
    static auto find_bottom_left_value(TreeNode *root) -> size_t {
        std::queue<TreeNode*> que_most;
        que_most.push(root);

        while (!que_most.empty()) {
            root = que_most.front();
            que_most.pop();
            if (root->right) que_most.push(root->right);
            if (root->left) que_most.push(root->left);
        }
        return root->value;
    }
};
