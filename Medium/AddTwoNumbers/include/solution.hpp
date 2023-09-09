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
    static auto add_two_numbers(ListNode *l1, ListNode *l2) -> ListNode* {
        auto *dummy = new ListNode();
        ListNode* current = dummy;
        int32_t carry = 0;

        while (l1 || l2 || carry) {
            int32_t x = (l1) ? l1->value : 0;
            int32_t y = (l2) ? l2->value : 0;

            int32_t sum = x + y + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy->next;
    }

    static auto insert(ListNode **head_ref, int32_t new_value) -> void {
        auto *node = new ListNode();
        node->value = new_value;
        node->next = (*head_ref);
        (*head_ref) = node;
    }

    static auto print(ListNode *head) -> void {
        while (head != nullptr) {
            std::cout << head->value << " ";
            head = head->next;
        }
    }
};
