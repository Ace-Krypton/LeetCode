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
