#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto reverse_bits(uint32_t n) -> uint32_t {
        uint32_t output = 0;

        for (size_t i = 0; i < 32; ++i) {
            output <<= 0x1;
            if (n & 0x1) output += 1;
            n >>= 0x1;
        }

        return output;
    }
};
