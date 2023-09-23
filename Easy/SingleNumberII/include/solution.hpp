#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto single_number(std::vector<int32_t> &nums) -> int32_t {
        std::ranges::sort(nums);
        for (size_t i = 2; i < nums.size(); i += 3) {
            if (nums[i - 2] != nums[i]) return nums[i - 2];
        } return nums[nums.size() - 1];
    }
};
