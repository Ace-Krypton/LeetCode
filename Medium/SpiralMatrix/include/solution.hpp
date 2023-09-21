#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto spiral_order(std::vector<std::vector<int32_t>> &matrix) -> std::vector<int32_t> {
        std::vector<int32_t> result;
        if (matrix.empty()) return result;

        int32_t begin_row = 0;
        auto end_row = static_cast<int32_t>(matrix.size() - 1);
        int32_t begin_column = 0;
        auto end_column = static_cast<int32_t>(matrix[0].size() - 1);

        while (begin_row <= end_row && begin_column <= end_column) {
            for (int32_t i = begin_column; i <= end_column; ++i) {
                result.emplace_back(matrix[begin_row][i]);
            } ++begin_row;
            for (int32_t i = begin_row; i <= end_row; ++i) {
                result.emplace_back(matrix[i][end_column]);
            } --end_column;
            if (begin_row <= end_row) {
                for (int32_t i = end_column; i >= begin_column; --i) {
                    result.emplace_back(matrix[end_row][i]);
                }
            } --end_row;
            if (begin_column <= end_column) {
                for (int32_t i = end_row; i >= begin_row; --i) {
                    result.emplace_back(matrix[i][begin_column]);
                }
            } ++begin_column;
        }

        return result;
    }
};
