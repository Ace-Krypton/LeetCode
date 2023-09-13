#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

struct ListNode {
    int32_t value;
    ListNode *next;
};

class Solution {
public:
    static auto remove_Nth_from_end(ListNode *head, int32_t n) -> ListNode* {
        auto *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *slow = dummy, *fast = dummy;
        for (std::size_t i = 0; i <= n; ++i) fast = fast->next;
        while (fast) slow = slow->next, fast = fast->next;
        slow->next = slow->next->next;
        head = dummy->next;
        delete dummy;
        return head;
    }

    static auto insert(ListNode **head_ref, int32_t new_value) -> void {
        auto *node = new ListNode();
        node->value = new_value;
        node->next = (*head_ref);
        (*head_ref) = node;
    }

    static auto print(ListNode *head) -> void {
        while (head != nullptr) {
            std::cout << head->value << ' ';
            head = head->next;
        }
    }
};
