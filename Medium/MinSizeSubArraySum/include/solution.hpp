#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto min_sub_array_len(const int32_t target,
                                  std::vector<int32_t> &nums) -> int32_t {
        int32_t sum = 0, left = 0, right = 0;
        int32_t result = std::numeric_limits<int32_t>::max();

        while (right < nums.size()) {
            sum += nums[right];

            while (sum >= target) {
                result = std::min(result, right - left + 1);
                sum -= nums[left];
                ++left;
            }

            ++right;
        }

        return (result == std::numeric_limits<int32_t>::max()) ? 0 : result;
    }
};
