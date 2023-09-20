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
    static auto build_tree(const std::vector<int32_t> &preorder,
                           const std::vector<int32_t> &inorder) -> TreeNode* {
        auto pre = preorder.begin();
        auto in = inorder.begin();

        std::function<TreeNode*(const int32_t)> construct =
                [&](const int32_t stop) -> TreeNode* {
            if (pre == preorder.end() || *in == stop) return (TreeNode*)nullptr;
            auto *node = new TreeNode{*(pre++)};
            node->left = construct(node->value);
            assert(*in == node->value);
            in++;
            node->right = construct(stop);
            return node;
        };

        return construct(std::numeric_limits<int32_t>::max());
    }

    [[maybe_unused]] static auto build_tree_tle(const std::vector<int32_t> &preorder,
                                                const std::vector<int32_t> &inorder) -> TreeNode* {
        std::unordered_map<int32_t, int32_t> inorder_map;
        for (int i = 0; i < inorder.size(); ++i) {
            inorder_map[inorder[i]] = i;
        }

        return helper(preorder, 0, preorder.size() - 1,
                      inorder_map, 0, inorder.size() - 1);
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

private:
    static auto helper(const std::vector<int32_t> &preorder, const int32_t pre_start,
                       const std::size_t pre_end, std::unordered_map<int32_t, int32_t> &inorder_map,
                       const int32_t in_start, const std::size_t in_end) -> TreeNode* {
        if (pre_start > pre_end || in_start > in_end) return nullptr;

        const int32_t root_val = preorder[pre_start];
        auto *root = new TreeNode(root_val);

        const int32_t in_root_index = inorder_map[root_val];
        const int32_t left_subtree_size = in_root_index - in_start;

        root->left = helper(preorder, pre_start + 1,
                            pre_start + left_subtree_size,
                            inorder_map, in_start, in_root_index - 1);
        root->right = helper(preorder, pre_start + left_subtree_size + 1,
                             pre_end, inorder_map,
                             in_root_index + 1, in_end);

        return root;
    }
};
