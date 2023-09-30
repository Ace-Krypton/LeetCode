#pragma once

#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto pivot_index(std::vector<int32_t> &nums) -> int32_t {
        int32_t left_sum = 0;
        int32_t right_sum = std::accumulate(nums.begin(), nums.end(), 0);

        for (size_t i = 0; i < nums.size(); ++i) {
            right_sum -= nums[i];
            if (right_sum == left_sum) return i;
            left_sum += nums[i];
        }

        return -1;
    }
};
