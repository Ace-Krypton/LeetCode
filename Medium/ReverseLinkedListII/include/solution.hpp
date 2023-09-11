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
    [[maybe_unused]] static auto reverse_between(ListNode *head, const int32_t left,
                                                 const int32_t right) -> ListNode* {
        if (!head || left == right) return head;

        auto *dummy = new ListNode();
        dummy->next = head;
        ListNode *prev = dummy;
        ListNode *curr = head;

        for (std::size_t i = 1; i < left; ++i) {
            prev = curr;
            curr = curr->next;
        }

        for (int i = 0; i < right - left; ++i) {
            ListNode *next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
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
            std::cout << head->value << ' ';
            head = head->next;
        }
    }
};
