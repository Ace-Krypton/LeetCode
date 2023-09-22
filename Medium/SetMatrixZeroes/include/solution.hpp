#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto set_zeroes(std::vector<std::vector<int32_t>> &matrix) -> void {
        const int32_t row_length = matrix.size();
        const int32_t column_length = matrix[0].size();

        std::vector<bool> row_zero(row_length);
        std::vector<bool> column_zero(column_length);

        for (size_t row = 0; row < row_length; ++row) {
            for (size_t column = 0; column < column_length; ++column) {
                if (matrix[row][column] == 0) {
                    row_zero[row] = true;
                    column_zero[column] = true;
                }
            }
        }

        for (size_t row = 0; row < row_length; ++row) {
            for (size_t column = 0; column < column_length; ++column) {
                if (row_zero[row] || column_zero[column]) {
                    matrix[row][column] = 0;
                }
            }
        }
    }
};
