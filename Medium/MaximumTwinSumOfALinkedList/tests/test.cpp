#include "../include/solution.hpp"

auto main() -> int {
    ListNode *node = nullptr;
    Solution::insert(&node, 1);
    Solution::insert(&node, 2);
    Solution::insert(&node, 4);
    Solution::insert(&node, 5);

    Solution::print(node);
    std::cout << '\n';
    int32_t result = Solution::pair_sum(node);
    std::cout << result;

    return 0;
}
