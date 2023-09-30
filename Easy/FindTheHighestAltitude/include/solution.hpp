#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto largest_altitude(std::vector<int32_t> &gain) -> int32_t {
        std::vector<int32_t> alt(gain.size() + 1);
        alt[0] = 0;

        for (size_t i = 0; i < gain.size(); ++i) {
            alt[i + 1] = alt[i] + gain[i];
        }

        return *std::max_element(alt.begin(), alt.end());
    }
};
