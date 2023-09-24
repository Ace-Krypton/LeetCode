#include "../include/solution.hpp"

auto main() -> int {
    auto *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);
    root->right->right->left = new TreeNode(5);

    for (const auto &elements : Solution::path_sum(root, 22)) {
        for (const auto &element : elements) {
            std::cout << element << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
