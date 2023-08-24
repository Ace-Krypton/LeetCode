#pragma once

#include <ranges>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto remove_duplicates(std::vector<int32_t> &nums) -> std::size_t {
        std::ranges::sort(nums);
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
