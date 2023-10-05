#include "../include/solution.hpp"

auto main() -> int {
    auto *first = new TreeNode(3);
    first->left = new TreeNode(5);
    first->left->left = new TreeNode(6);
    first->left->right = new TreeNode(2);
    first->left->right->left = new TreeNode(7);
    first->left->right->right = new TreeNode(4);
    first->right = new TreeNode(1);
    first->right->left = new TreeNode(9);
    first->right->right = new TreeNode(8);

    auto *second = new TreeNode(3);
    second->left = new TreeNode(5);
    second->left->left = new TreeNode(6);
    second->left->right = new TreeNode(7);
    second->right = new TreeNode(1);
    second->right->left = new TreeNode(4);
    second->right->right = new TreeNode(2);
    second->right->right->left = new TreeNode(9);
    second->right->right->right = new TreeNode(8);

    std::cout << std::boolalpha << Solution::leaf_similar(first, second);

    return 0;
}
