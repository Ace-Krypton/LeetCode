#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto contains_nearby_duplicate(std::vector<int32_t> &nums,
                                          const int32_t k) -> bool {
        std::unordered_map<int32_t, int32_t> map_k;

        for (int32_t i = 0; i < nums.size(); ++i) {
            if (map_k.contains(nums[i]) && i - map_k[nums[i]] <= k) {
                return true;
            }
            map_k[nums[i]] = i;
        }

        return false;
    }
};
