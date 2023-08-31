#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto num_jewels_in_stones(const std::string &jewels,
                                     const std::string &stones) -> std::size_t {
        return std::ranges::count_if(stones, [&](const char &stone) -> bool {
            return std::ranges::any_of(jewels, [&](const char &jewel) -> bool {
                return jewel == stone;
            });
        });
    }
};
