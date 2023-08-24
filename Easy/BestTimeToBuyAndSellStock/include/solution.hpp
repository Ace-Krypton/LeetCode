#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto max_profit(std::vector<int32_t> &prices) -> int32_t {
        int32_t min_price = prices.at(0);
        int32_t max_profit = 0;

        for (int32_t price : prices) {
            max_profit = std::max(max_profit, price - min_price);
            min_price = std::min(price, min_price);
        }

        return max_profit;
    }
};
