#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <gtest/gtest.h>

class Solution {
public:
    static auto find_difference(const std::vector<int32_t> &first,
                                const std::vector<int32_t> &second)
                                -> std::vector<std::vector<int32_t>> {
        std::unordered_set<int32_t> first_st(first.begin(), first.end());
        std::unordered_set<int32_t> second_st(second.begin(), second.end());

        std::vector<int32_t> distinct_first, distinct_second;

        for (const int32_t num : first_st) {
            if (second_st.count(num) == 0) {
                distinct_first.emplace_back(num);
            }
        }

        for (const int32_t num : second_st) {
            if (first_st.count(num) == 0) {
                distinct_second.emplace_back(num);
            }
        }

        return {distinct_first, distinct_second};
    }
};
