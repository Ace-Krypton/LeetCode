#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto can_jump(std::vector<uint32_t> &nums) -> bool {
        uint32_t reachable = 0;

        for (uint32_t i = 0; i < nums.size(); ++i) {
            if (reachable < i) return false;
            reachable = std::max(reachable, i + nums[i]);
        }

        return true;
    }
};
