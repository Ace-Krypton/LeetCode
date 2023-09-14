#pragma once

#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

struct ListNode {
    int32_t value;
    ListNode *next;
};

class Solution {
public:
    static auto delete_duplicates(ListNode* head) -> ListNode* {
        if (!head || !head->next) return head;
        ListNode *current = head;

        while (current != nullptr && current->next != nullptr) {
            if (current->value == current->next->value) {
                current->next = current->next->next;
            } else current = current->next;
        }

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
