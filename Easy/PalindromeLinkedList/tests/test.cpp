#include "../include/solution.hpp"

auto main() -> int {
    ListNode *head = nullptr;
    Solution::insert(&head, 1);
    Solution::insert(&head, 2);
    Solution::insert(&head, 2);
    Solution::insert(&head, 1);

    std::cout << std::boolalpha << Solution::is_palindrome(head);

    return 0;
}
