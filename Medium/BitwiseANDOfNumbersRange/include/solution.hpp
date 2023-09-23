#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto range_bitwise_and(int32_t left, int32_t right) -> int32_t {
        int32_t count = 0;

        while (left != right) {
            left >>= 1;
            right >>= 1;
            count += 1;
        }

        return left <<= count;
    }
};
