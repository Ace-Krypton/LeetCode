#pragma once

#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto max_sub_array(std::vector<int32_t> &nums) -> int32_t {
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        std::ios::sync_with_stdio(false);

        int32_t max_sub = std::numeric_limits<int32_t>::min();
        int32_t current_sum = 0;

        for (const int32_t num : nums) {
            current_sum = std::max(num, current_sum + num);
            max_sub = std::max(max_sub, current_sum);
        }

        return max_sub;
    }
};
