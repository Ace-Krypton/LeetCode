#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto summary_ranges(std::vector<int32_t> &nums) -> std::vector<std::string> {
        std::vector<std::string> result;

        for (const int32_t &num : nums) {
            if (std::find(nums.begin(), nums.end(),
                          num - 1) == nums.end()) {
                int32_t current_num = num;
                int32_t current_streak = 1;

                while (std::count(nums.begin(), nums.end(),
                                  current_num + 1)) {
                    current_num += 1;
                    current_streak += 1;
                }

                if (current_streak > 1) {
                    result.push_back(std::to_string(num) + "->"
                        + std::to_string(current_num));
                } else {
                    result.push_back(std::to_string(num));
                }
            }
        }

        return result;
    }
};
