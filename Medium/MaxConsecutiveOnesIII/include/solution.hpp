#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto longest_ones(const std::vector<int32_t > &nums, int32_t k) -> size_t {
        size_t max_ones = 0, left = 0;

        for (size_t right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) --k;

            while (k < 0) {
                if (nums[left] == 0) ++k;
                ++left;
            }

            max_ones = std::max(max_ones, right - left + 1);
        }

        return max_ones;
    }
};
