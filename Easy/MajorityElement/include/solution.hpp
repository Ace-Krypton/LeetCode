#pragma once

#include <vector>
#include <ranges>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto majority_element(std::vector<int32_t> &nums) -> std::size_t {
        std::ranges::sort(nums);
        return nums[nums.size() / 2];
    }
};
