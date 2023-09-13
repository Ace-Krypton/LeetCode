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
    static auto rotate_right(ListNode *head, int32_t k) -> ListNode* {
        if (head == nullptr || k <= 0) return head;

        int32_t length = get_length(head);
        k %= length;
        if (k == 0) return head;

        ListNode* current = head;

        for (int i = 0; i < length - k - 1; ++i) {
            current = current->next;
        }

        ListNode* new_head = current->next;
        current->next = nullptr;
        current = new_head;

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = head;
        return new_head;
    }

    static auto get_length(ListNode *node) -> int32_t {
        int32_t count = 0;
        while (node != nullptr) ++count, node = node->next;
        return count;
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
