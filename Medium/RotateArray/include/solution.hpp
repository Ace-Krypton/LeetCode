#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto rotate(std::vector<int32_t> &nums,
                       std::size_t steps) -> void {
        steps = steps % nums.size();
        std::rotate(nums.begin(), nums.begin()
            + static_cast<long>(nums.size() - steps), nums.end());
    }
};
