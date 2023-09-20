#include "../include/solution.hpp"

auto main() -> int {
    std::vector<int32_t> preorder = {3, 9, 20, 15, 7};
    std::vector<int32_t> inorder = {9, 3, 15, 20, 7};

    Solution::preorder(Solution::build_tree(preorder, inorder));

    return 0;
}
