#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto game_of_life(std::vector<std::vector<int32_t>> &board) -> void {
        size_t height = board.size();
        size_t width = board[0].size();

        int32_t del_r[] = {0, -1, -1, -1, 0, 1, 1, 1};
        int32_t del_c[] = {1, 1, 0, -1, -1, -1, 0, 1};

        std::vector<std::vector<int32_t>> new_board = board;

        for (size_t row = 0; row < height; ++row) {
            for (size_t column = 0; column < width; ++column) {
                int32_t live_neigbours = 0;

                for (size_t current = 0; current < 8; current++) {
                    int32_t n_row = row + del_r[current];
                    int32_t n_column = column + del_c[current];

                    if (n_row >= 0 && n_row < height && n_column >= 0
                        && n_column < width && (board[n_row][n_column] == 1
                        || board[n_row][n_column] == -1)) {
                        ++live_neigbours;
                    }
                }

                if (board[row][column] == 1
                    && (live_neigbours < 2 || live_neigbours > 3)) {
                    new_board[row][column] = -1;
                } else if (board[row][column] == 0 && live_neigbours == 3) {
                    new_board[row][column] = 2;
                }
            }
        }

        for (size_t row = 0; row < height; ++row) {
            for (size_t column = 0; column < width; ++column) {
                if (new_board[row][column] == -1) {
                    board[row][column] = 0;
                } else if (new_board[row][column] == 2) {
                    board[row][column] = 1;
                }
            }
        }
    }
};
