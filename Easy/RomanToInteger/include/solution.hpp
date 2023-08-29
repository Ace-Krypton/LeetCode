#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <gtest/gtest.h>

class Solution {
public:
    static auto roman_to_int(const std::string &value) -> int32_t {
        int32_t total = 0;

        std::unordered_map<char, int32_t> representations {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
        };

        for (std::size_t ch = 0; ch < value.length(); ++ch) {
            if (ch + 1 < value.length()
                && representations[value[ch]]
                < representations[value[ch + 1]]) {
                total -= representations[value[ch]];
            } else {
                total += representations[value[ch]];
            }
        }

        return total;
    }
};
