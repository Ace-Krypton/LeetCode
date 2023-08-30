#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto convert(std::string word, int32_t num_rows) -> std::string {
        if (num_rows == 1 || word.length() <= num_rows) {
            return word;
        }

        std::vector<std::string> rows(num_rows);
        int32_t current_row = 0;
        bool going_down = false;

        for (char ch : word) {
            rows[current_row] += ch;
            if (current_row == 0 || current_row == num_rows - 1) {
                going_down = !going_down;
            }
            current_row += going_down ? 1 : -1;
        }

        std::string result;
        for (const std::string &row : rows) result += row;

        return result;
    }
};
