#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto single_number(std::vector<int32_t> &nums) -> int32_t {
        int32_t ans = 0;
        for (const int32_t &num : nums) ans ^= num;
        return ans;
    }
};
