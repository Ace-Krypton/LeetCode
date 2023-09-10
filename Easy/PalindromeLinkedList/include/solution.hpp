#pragma once

#include <ranges>
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
    static auto is_palindrome(ListNode *head) -> bool {
        std::vector<int32_t> numbers;

        while (head != nullptr) {
            numbers.emplace_back(head->value);
            head = head->next;
        }

        std::size_t left = 0;
        std::size_t right = numbers.size() - 1;

        while (left < right) {
            if (numbers[left] != numbers[right]) {
                return false;
            } ++left, --right;
        }

        return true;
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
