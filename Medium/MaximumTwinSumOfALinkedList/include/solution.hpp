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
    static auto pair_sum(ListNode *head) -> int32_t {
        if (head->next == nullptr) return head->value;
        if (head->next->next == nullptr) {
            return head->value + head->next->value;
        }

        ListNode *slow = head, *fast = head;
        ListNode *prev = nullptr;

        while (fast && fast->next) {
            fast = fast->next->next;
            ListNode *temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }

        int32_t result = 0;

        while (slow) {
            int32_t sum = prev->value + slow->value;
            result = std::max(result, sum);
            prev = prev->next;
            slow = slow->next;
        }

        return result;
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
