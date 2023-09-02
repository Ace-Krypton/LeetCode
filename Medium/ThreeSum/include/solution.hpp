#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto three_sum(std::vector<int32_t> &nums)
        -> std::vector <std::vector<int32_t>> {
        std::ranges::sort(nums);
        std::set<std::vector<int32_t>> unique_rows;

        for (std::size_t i = 0; i < nums.size() - 2; ++i) {
            std::size_t left = i + 1;
            std::size_t right = nums.size() - 1;

            while (left < right) {
                int32_t sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) unique_rows.insert({nums[i],
                                                  nums[left],
                                                  nums[right]}),
                                                  ++left, --right;
                else if (sum < 0) ++left;
                else --right;
            }
        }

        std::vector<std::vector<int32_t>> result(unique_rows.begin(),
                                                 unique_rows.end());

        return result;
    }
};
