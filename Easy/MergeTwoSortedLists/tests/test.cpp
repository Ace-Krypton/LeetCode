#include "../include/solution.hpp"

auto main() -> int {
    ListNode *list1 = nullptr;
    Solution::insert(&list1, 4);
    Solution::insert(&list1, 2);
    Solution::insert(&list1, 1);

    ListNode *list2 = nullptr;
    Solution::insert(&list2, 4);
    Solution::insert(&list2, 3);
    Solution::insert(&list2, 1);

    Solution::print(Solution::merge_two_lists(list1, list2));

    return 0;
}
