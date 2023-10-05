#pragma once

#include <vector>
#include <iostream>
#include <gtest/gtest.h>

class Solution {
public:
    static auto majority_element(const std::vector<int32_t> &nums)
                -> std::vector<int32_t> {
        if (nums.size() < 3) return nums;

        std::unordered_map<int32_t, size_t> freq_mp;
        for (const int32_t num : nums) freq_mp[num]++;

        std::vector<int32_t> result;
        for (const auto pairs : freq_mp) {
            if (pairs.second > nums.size() / 3) {
                result.push_back(pairs.first);
            }
        }

        return result;
    }
};
