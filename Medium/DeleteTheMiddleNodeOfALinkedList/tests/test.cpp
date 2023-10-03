#include "../include/solution.hpp"

auto main() -> int {
    ListNode *node = nullptr;
    Solution::insert(&node, 1);
    Solution::insert(&node, 3);
    Solution::insert(&node, 4);
    Solution::insert(&node, 7);
    Solution::insert(&node, 1);
    Solution::insert(&node, 2);
    Solution::insert(&node, 6);

    Solution::print(node);
    std::cout << '\n';
    node = Solution::delete_middle(node);
    Solution::print(node);

    return 0;
}
