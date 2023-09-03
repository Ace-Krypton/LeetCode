#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto climb_stairs(const int32_t n) -> int32_t {
        if (n <= 2) return n;

        int32_t current = 0, prev_one = 2, prev_two = 1;

        for (std::size_t i = 3; i <= n; ++i) {
            current = prev_one + prev_two;
            prev_two = prev_one;
            prev_one = current;
        }

        return current;
    }
};
