#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto longest_subarray(std::vector<int32_t> &nums) -> size_t {
        size_t left = 0, right = 0, longest = 0;
        int32_t deleted = 0;

        while (right < nums.size()) {
            if (nums[right] == 1) ++right;
            else ++right, ++deleted;

            while (deleted > 1) {
                if (nums[left] == 0) --deleted;
                ++left;
            }

            longest = std::max(longest, right - left - 1);
        }

        return longest;
    }
};
