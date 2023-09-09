#include "../include/solution.hpp"

auto main() -> int {
    ListNode *l1 = nullptr;
    Solution::insert(&l1, 2);
    Solution::insert(&l1, 4);
    Solution::insert(&l1, 3);

    ListNode *l2 = nullptr;
    Solution::insert(&l2, 5);
    Solution::insert(&l2, 6);
    Solution::insert(&l2, 4);

    Solution::print(Solution::add_two_numbers(l1, l2));

    return 0;
}
