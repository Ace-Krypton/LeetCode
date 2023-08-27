#pragma once

#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto can_complete_circuit(std::vector<int32_t> &gas,
                                     std::vector<int32_t> &cost) -> int32_t {
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        std::ios::sync_with_stdio(false);

        if (std::accumulate(gas.begin(), gas.end(), 0)
            < std::accumulate(cost.begin(), cost.end(), 0)) return -1;

        int32_t total = 0, result = 0;

        for (int32_t i = 0; i < gas.size(); ++i) {
            total += (gas[i] - cost[i]);
            if (total < 0) total = 0, result = i + 1;
        }

        return result;
    }
};
