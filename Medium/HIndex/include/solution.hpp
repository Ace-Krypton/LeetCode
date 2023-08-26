#pragma once

#include <vector>
#include <iostream>
#include <ranges>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    [[maybe_unused]] static auto regular_h_index(std::vector<int32_t> &citations) -> int32_t {
        std::ranges::sort(citations, std::greater<>());

        int32_t current_h_index = 0;

        for (int32_t i = 0; i < citations.size(); ++i) {
            if (citations[i] >= i + 1) current_h_index = i + 1;
            else break;
        }

        return current_h_index;
    }

    static auto h_index(std::vector<int32_t> &citations) -> int32_t {
        std::sort(citations.begin(), citations.end(), std::greater<>());
        return static_cast<int32_t>(std::distance(citations.begin(),
                                                  std::find_if(citations.begin(),
                                                               citations.end(),
                                                               [i = 0](const int32_t &val) mutable -> bool {
                                                      return val < ++i;
                                                  })));
    }
};
