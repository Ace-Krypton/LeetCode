#include "../include/solution.hpp"

auto main() -> int {
    auto *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(6);
    root->right->left = new TreeNode(5);
    root->right->left->left = new TreeNode(7);

    std::cout << Solution::find_bottom_left_value(root);

    return 0;
}
