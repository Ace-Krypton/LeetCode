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
    static auto is_same_tree(TreeNode *p, TreeNode *q) -> bool {
        static std::function<bool(TreeNode*, TreeNode*)> is_same_tree_impl =
                [&](TreeNode *p, TreeNode *q) -> bool {
                    if (p == nullptr && q == nullptr) return true;
                    if (p == nullptr || q == nullptr) return false;
                    if (p->value == q->value) {
                        return is_same_tree_impl(p->left, q->left) &&
                               is_same_tree_impl(p->right, q->right);
                    }
                    return false;
                };
        return is_same_tree_impl(p, q);
    }
};
