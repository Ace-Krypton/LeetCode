#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto equal_pairs(const std::vector<std::vector<int32_t>>& grid) -> int32_t {
        std::unordered_map<std::vector<int32_t>, int32_t, CustomHash> mp;
        int32_t ans = 0;
        for (const auto &row : grid) mp[row]++;

        for (size_t i = 0; i < grid.size(); ++i){
            std::vector<int32_t> v;
            for (const auto &j : grid) v.push_back(j[i]);
            ans += mp[v];
        }

        return ans;
    }

private:
    struct CustomHash {
        auto operator()(const std::vector<int32_t> &vec) const -> size_t {
            size_t hash = 0;
            for (int32_t num : vec) {
                hash ^= std::hash<int32_t>{}(num);
            }
            return hash;
        }
    };
};
