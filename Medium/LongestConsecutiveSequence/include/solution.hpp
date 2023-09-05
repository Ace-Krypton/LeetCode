#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <gtest/gtest.h>

class Solution {
public:
    static auto longest_consecutive(const std::vector<int32_t> &nums) -> int32_t {
        if (nums.empty()) return 0;
        int32_t longest_streak = 0;
        std::unordered_set<int32_t> num_set(nums.begin(), nums.end());

        for (const int32_t &num : num_set) {
            if (!num_set.contains(num - 1)) {
                int32_t current_num = num;
                int32_t current_streak = 1;

                while (num_set.count(current_num + 1)) {
                    current_num += 1;
                    current_streak += 1;
                }

                longest_streak = std::max(longest_streak, current_streak);
            }
        }

        return longest_streak;
    }
};
