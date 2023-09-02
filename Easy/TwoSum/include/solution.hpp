#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto two_sum(const std::vector<int32_t> &numbers,
                        const int32_t target) -> std::vector<int32_t> {
        std::vector<int32_t> result;
        std::unordered_map<int32_t, std::size_t> index_map;

        for (std::size_t i = 0; i < numbers.size(); ++i) {
            int32_t complement = target - numbers[i];

            if (index_map.find(complement) != index_map.end()) {
                result.emplace_back(index_map[complement]);
                result.emplace_back(i);
                return result;
            }

            index_map[numbers[i]] = i;
        }

        return result;
    }
};
