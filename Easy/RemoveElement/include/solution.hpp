#pragma once

#include <vector>
#include <ranges>
#include <iostream>
#include <algorithm>

class Solution {
public:
    static auto remove_element(std::vector<int32_t> &nums,
                               int32_t value) -> std::size_t {
        nums.erase(std::remove_if(nums.begin(), nums.end(),
                                  [value](int32_t &element) -> bool
                                  { return element == value; }), nums.end());

        return nums.size();
    }
};
