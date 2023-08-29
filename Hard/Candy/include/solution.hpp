#pragma once

#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto candy(std::vector<int32_t> &ratings) -> std::size_t {
        std::vector<std::size_t> candies(ratings.size(), 1);

        for (std::size_t i = 1; i < ratings.size(); ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        for (std::size_t i = ratings.size() - 2; i < ratings.size(); --i) {
            if (ratings[i] > ratings[i + 1] && candies[i] <= candies[i + 1]) {
                candies[i] = candies[i + 1] + 1;
            } if (i == 0) break;
        }

        std::size_t total_candies_needed =
                std::accumulate(candies.begin(),
                                candies.end(),
                                std::size_t(0));

        return total_candies_needed;
    }
};
