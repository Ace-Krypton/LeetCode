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
    static auto reverse_list(ListNode *head) -> ListNode* {
        if (head == nullptr) return head;

        ListNode *current = head;
        ListNode *prev = nullptr;

        while (current != nullptr) {
            ListNode *next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }

    static auto insert(ListNode **head_ref,
                       const int32_t new_value) -> void {
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
