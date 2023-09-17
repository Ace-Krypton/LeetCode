#include "../include/solution.hpp"

auto main() -> int {
    auto *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right = new TreeNode(7);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    Solution::print(root);
    std::cout << '\n';
    Solution::print(Solution::invert_tree(root));

    return 0;
}
