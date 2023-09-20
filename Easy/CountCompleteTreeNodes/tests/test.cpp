#include "../include/solution.hpp"

auto main() -> int {
    auto *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);

    std::cout << Solution::count_nodes(root);

    return 0;
}
