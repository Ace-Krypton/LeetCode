#include "../include/solution.hpp"

auto main() -> int {
    auto *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(15);

    std::cout << Solution::max_depth(root);

    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
