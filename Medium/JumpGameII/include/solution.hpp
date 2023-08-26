#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto jump(std::vector<uint32_t> &nums) -> uint32_t {
        uint32_t farthest = 0, current = 0, jump = 0;

        for (uint32_t i = 0; i < nums.size() - 1; ++i){
            farthest = std::max(farthest, nums[i] + i);
            if (i == current) current = farthest, jump++;
        }

        return jump;
    }
};
