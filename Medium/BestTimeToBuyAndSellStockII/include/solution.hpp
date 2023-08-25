#pragma once

#include <vector>
#include <ranges>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto max_profit(const std::vector<int32_t>& prices) -> int32_t {
        return std::accumulate(prices.begin() + 1, prices.end(), 0,
                               [prev_price = prices.front()]
                               (int32_t total_profit, int32_t price) mutable -> __int32_t {
            total_profit += std::max(price - prev_price, 0);
            prev_price = price;
            return total_profit;
        });
    }
};
