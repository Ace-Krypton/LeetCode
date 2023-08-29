#pragma once

#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto trap(std::vector<int32_t> &height) -> std::size_t {
        std::size_t left = 0;
        int32_t current_height = 0;
        std::size_t right = height.size() - 1;
        std::size_t total_trapped_water = 0;

        while (left < right) {
            int32_t obstacle = height[left];

            if (obstacle < height[right]) {
                current_height = std::max(current_height, obstacle);
                total_trapped_water += current_height - obstacle;
                left++;
            } else {
                obstacle = height[right];
                current_height = std::max(current_height, obstacle);
                total_trapped_water += current_height - obstacle;
                right--;
            }
        }

        return total_trapped_water;
    }
};
