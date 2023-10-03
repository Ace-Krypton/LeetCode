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
    static auto delete_middle(ListNode *head) -> ListNode* {
        if (head->next == nullptr) return nullptr;

        ListNode *slow = head;
        ListNode *fast = head->next->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = slow->next->next;
        return head;
    }

    static auto insert(ListNode **head_ref,
                       const int32_t new_value) -> void {
        auto *node = new ListNode();
        node->value = new_value;
        node->next = (*head_ref);
        (*head_ref) = node;
    }

    static auto print(ListNode *head) -> void {
        while (head->next != nullptr) {
            std::cout << head->value << ' ';
            head = head->next;
        }
    }
};
