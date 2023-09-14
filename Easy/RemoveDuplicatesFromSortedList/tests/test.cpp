#include "../include/solution.hpp"

auto main() -> int {
    ListNode *node = nullptr;
    Solution::insert(&node, 3);
    Solution::insert(&node, 3);
    Solution::insert(&node, 2);
    Solution::insert(&node, 1);
    Solution::insert(&node, 1);

    Solution::print(node);
    std::cout << '\n';
    node = Solution::delete_duplicates(node);
    Solution::print(node);
    delete node;

    return 0;
}
