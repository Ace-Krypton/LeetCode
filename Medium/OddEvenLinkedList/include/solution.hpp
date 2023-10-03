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
    static auto odd_even_list(ListNode *head) -> ListNode* {
       if (head == nullptr) return nullptr;

       ListNode *odd = head;
       ListNode *even = head->next;
       ListNode *even_head = head->next;

       while (even && even->next) {
           odd->next = odd->next->next;
           even->next = even->next->next;
           odd = odd->next;
           even = even->next;
       }

       odd->next = even_head;
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
        while (head != nullptr) {
            std::cout << head->value << ' ';
            head = head->next;
        }
    }
};
