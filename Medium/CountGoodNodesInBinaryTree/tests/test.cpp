#include "../include/solution.hpp"

auto main() -> int {
    auto *root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->left->left = new TreeNode(3);
    root->right = new TreeNode(4);
    root->right->right = new TreeNode(5);
    root->right->left = new TreeNode(1);

    std::cout << Solution::good_nodes(root);

    return 0;
}
