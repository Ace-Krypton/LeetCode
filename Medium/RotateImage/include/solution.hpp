#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto rotate(std::vector<std::vector<int32_t>> &matrix) -> void {
        std::ranges::reverse(matrix);

        for (size_t row = 0; row < matrix.size(); ++row) {
            for (size_t column = row + 1; column < matrix[row].size(); ++column) {
                std::swap(matrix[row][column], matrix[column][row]);
            }
        }
    }
};
