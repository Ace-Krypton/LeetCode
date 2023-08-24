#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

struct most_two {
    std::unordered_map<int32_t, int32_t> counts;

    auto operator()(const int32_t &num) -> bool {
        return counts[num]++ >= 2;
    }
};

class Solution {
public:
    static auto remove_duplicates(std::vector<int32_t> &nums) -> std::size_t {
        most_two predicate;
        nums.erase(std::remove_if(nums.begin(), nums.end(),
                                  [&](const int32_t &num) -> bool
                                  { return predicate(num); }), nums.end());

        return nums.size();
    }
};
