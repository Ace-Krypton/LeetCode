#include "../include/solution.hpp"

auto main() -> int {
    auto *p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    auto *q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    std::cout << std::boolalpha << Solution::is_same_tree(p, q);

    return 0;
}
