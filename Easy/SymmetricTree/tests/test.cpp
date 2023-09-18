#include "../include/solution.hpp"

auto main() -> int {
    auto *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    root->right->left = new TreeNode(4);

    std::cout << std::boolalpha << Solution::is_symmetric(root);

    return 0;
}
