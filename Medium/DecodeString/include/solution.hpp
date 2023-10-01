#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto decode_string(const std::string &word) -> std::string {
        std::stack<std::string> substrings;
        std::stack<size_t> multipliers;
        size_t multiplier = 0;
        std::string current_sub;

        for (const char &ch : word) {
            if (isdigit(ch)) {
                multiplier = multiplier * 10 + (ch - '0');
            } else if (ch == '[') {
                multipliers.push(multiplier);
                substrings.push(current_sub);
                multiplier = 0;
                current_sub.clear();
            } else if (ch == ']') {
                size_t repeat_count = multipliers.top();
                multipliers.pop();
                std::string previous_sub = substrings.top();
                substrings.pop();
                for (size_t i = 0; i < repeat_count; ++i) {
                    previous_sub += current_sub;
                }
                current_sub = previous_sub;
            } else current_sub += ch;
        }

        return current_sub;
    }
};
