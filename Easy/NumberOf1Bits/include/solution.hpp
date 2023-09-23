#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto hamming_weight(uint32_t n) -> int32_t {
        size_t count = 0;

        while (n > 0) {
            if (n & 1) ++count;
            n >>= 1;
        }

        return count;
    }
};
