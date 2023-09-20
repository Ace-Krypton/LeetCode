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
    static auto build_tree(std::vector<int32_t> &inorder,
                           std::vector<int32_t> &postorder) -> TreeNode* {
        std::unordered_map<int32_t, int32_t> index;
        for (int32_t i = 0; i < inorder.size(); ++i) index[inorder[i]] = i;
        return helper(inorder, postorder, 0,
                      inorder.size() - 1, 0,
                      postorder.size() - 1, index);
    }

    static auto preorder(TreeNode *node) -> void {
        std::function<void(TreeNode*)> print =
                [&] (TreeNode *node) -> void {
                    if (node == nullptr) return;
                    std::cout << node->value << ' ';
                    print(node->left);
                    print(node->right);
                };

        print(node);
    }

    static auto helper(const std::vector<int32_t> &inorder, const std::vector<int32_t> &postorder,
                       const int32_t in_start, const int32_t in_end, const int32_t post_start,
                       const int32_t post_end, std::unordered_map<int32_t, int32_t> &index) -> TreeNode* {
        if (in_start > in_end
            || post_start > post_end) {
            return nullptr;
        }
        const int32_t rootVal = postorder[post_end];
        TreeNode* root = new TreeNode(rootVal);
        const int32_t inorderRootIndex = index[rootVal];
        const int32_t leftSubtreeSize = inorderRootIndex - in_start;
        root->left = helper(inorder, postorder, in_start,
                            inorderRootIndex - 1, post_start,
                            post_start + leftSubtreeSize - 1, index);
        root->right = helper(inorder, postorder, inorderRootIndex + 1,
                             in_end, post_start + leftSubtreeSize,
                             post_end - 1, index);
        return root;
    }
};
