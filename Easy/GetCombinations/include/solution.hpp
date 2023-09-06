#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto get_combinations(std::vector<int32_t> &combinations) -> std::size_t {
        std::size_t count = 0;

        for (std::size_t i = 0; i < combinations.size(); ++i) {
            for (std::size_t j = i + 1; j < combinations.size(); ++j) {
                if (combinations[i] + combinations[j] <= 100) {
                    ++count;
                }
            }
        }

        return count;
    }
};
