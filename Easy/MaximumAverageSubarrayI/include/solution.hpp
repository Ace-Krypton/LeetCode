#pragma once

#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto find_max_average(std::vector<int32_t> &nums,
                                 const int32_t k) -> double {
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        std::ios::sync_with_stdio(false);
        double current_sum = std::accumulate(std::begin(nums),
                                             std::begin(nums) + k, 0.0);
        double max_sum = current_sum;

        for (size_t i = k; i < nums.size(); ++i) {
            current_sum += nums[i] - nums[i - k];
            max_sum = std::max(max_sum, current_sum);
        }

        return max_sum / k;
    }
};
