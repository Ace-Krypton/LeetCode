#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto max_operations(std::vector<int32_t> &nums,
                               const int32_t k) -> size_t {
        std::ranges::sort(nums);
        size_t left = 0, right = nums.size() - 1, count = 0;

        while (left < right) {
            if (nums[left] + nums[right] == k) {
                ++left, --right, ++count;
            } else if (nums[left] + nums[right] < k) {
                ++left;
            } else --right;
        }

        return count;
    }
};
