#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto can_place_flowers(std::vector<int32_t> &flowerbed,
                                  int32_t number) -> bool {
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(), 0);

        for (size_t i = 1; i < flowerbed.size() - 1; ++i) {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0
                && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                --number;
            }
        }

        return number <= 0;
    }
};
