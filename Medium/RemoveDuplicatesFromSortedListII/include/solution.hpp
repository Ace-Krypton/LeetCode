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
    static auto delete_duplicates(ListNode *head) -> ListNode* {
        if (!head || !head->next) return head;
        std::unordered_map<int32_t, std::size_t> l_map;

        ListNode *current = head;
        while (current != nullptr) {
            l_map[current->value]++;
            current = current->next;
        }

        auto *dummy = new ListNode();
        dummy->next = head;
        ListNode *prev = dummy;
        current = head;

        while (current != nullptr) {
            if (l_map[current->value] > 1) {
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else prev = current, current = current->next;
        }

        ListNode *result = dummy->next;
        delete dummy;
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
