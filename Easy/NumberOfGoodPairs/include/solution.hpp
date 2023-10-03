#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto num_identical_pairs(const std::vector<int32_t> &nums) -> size_t {
        std::unordered_map<int32_t, size_t> mp;
        size_t result = 0;

        for (const int32_t num : nums) result += mp[num]++;
        return result;
    }
};
