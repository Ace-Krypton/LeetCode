#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto unique_occurrences(const std::vector<int32_t> &arr) -> bool {
        std::set<int32_t> freq;
        std::unordered_map<int32_t, size_t> mp;

        for (const auto &element : arr) mp[element]++;
        for (const auto &val : mp) freq.insert(val.second);

        return freq.size() == mp.size();
    }
};
