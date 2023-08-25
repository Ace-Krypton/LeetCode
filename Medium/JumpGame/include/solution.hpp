#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto can_jump(std::vector<int32_t> &nums) -> bool {
        if (nums.front() == 0 && nums.size() != 1) return false;

        if (!(std::ranges::find(nums, 0) != nums.end())) {
            return true;
        }

        int32_t reachable = 0;

        for (int32_t i = 0; i < nums.size(); ++i) {
            if (reachable < i) return false;
            reachable = std::max(reachable, i + nums[i]);
        }

        return true;
    }
};
