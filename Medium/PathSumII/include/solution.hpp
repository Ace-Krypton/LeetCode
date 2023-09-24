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
    static auto path_sum(TreeNode *root,
                         const int32_t target) -> std::vector<std::vector<int32_t>> {
        std::vector<std::vector<int32_t>> result;
        std::vector<int32_t> temp;
        helper(root,target,temp,result);
        return result;
    }

    static auto helper(TreeNode *root, const int32_t target,
                       std::vector<int32_t> &temp,
                       std::vector<std::vector<int32_t>> &result) -> void {
        std::function<void(TreeNode*, const int32_t)> recursive_helper =
                [&](TreeNode* node, const int32_t remaining_target) -> void {
            if (node == nullptr) return;
            temp.emplace_back(node->value);

            if (!node->left && !node->right
                && remaining_target == node->value) {
                result.emplace_back(temp);
            }

            recursive_helper(node->left, remaining_target - node->value);
            recursive_helper(node->right, remaining_target - node->value);

            temp.pop_back();
        };

        recursive_helper(root, target);
    }
};
