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
    static auto partition(ListNode *head, const int32_t x) -> ListNode* {
        auto *before_head = new ListNode();
        ListNode *before = before_head;
        auto *after_head = new ListNode();
        ListNode *after = after_head;

        while (head != nullptr) {
            if (head->value < x) {
                before->next = head;
                before = before->next;
            } else {
                after->next = head;
                after = after->next;
            } head = head->next;
        }

        after->next = nullptr;
        before->next = after_head->next;

        ListNode *result = before_head->next;
        delete before_head;
        delete after_head;

        return result;
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
