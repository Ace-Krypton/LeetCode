#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <gtest/gtest.h>

class Solution {
public:
    static auto generate_parenthesis(const int32_t n) -> std::vector<std::string> {
        std::vector<std::string> result;

        std::function<void(std::string, int32_t, int32_t)> backtrack = [&](const std::string &current,
                const int32_t open, const int32_t close) -> void {
            if (current.length() == n * 2) {
                result.emplace_back(current);
                return;
            } if (open < n) {
                backtrack(current + '(', open + 1, close);
            } if (close < open) {
                backtrack(current + ')', open, close + 1);
            }
        };

        backtrack({ }, 0, 0);
        return result;
    }
};
