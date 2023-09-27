#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto move_zeroes(std::vector<int32_t> &nums) -> void {
        size_t numbers = 0;

        for (auto it = nums.begin(); it != nums.end();) {
            if (*it == 0) {
                it = nums.erase(it);
                numbers++;
            } else ++it;
        }

        for (size_t i = 0; i < numbers; ++i) nums.emplace_back(0);
    }

    static auto move_zeroes_two_pointers(std::vector<int32_t> &nums) -> void {

    }
};
