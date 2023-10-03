#include "../include/solution.hpp"

auto main() -> int {
    ListNode *node = nullptr;
    Solution::insert(&node, 5);
    Solution::insert(&node, 4);
    Solution::insert(&node, 3);
    Solution::insert(&node, 2);
    Solution::insert(&node, 1);

    Solution::print(node);
    std::cout << '\n';
    node = Solution::reverse_list(node);
    Solution::print(node);

    return 0;
}
