#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    [[maybe_unused]] static auto max_area_TLE(std::vector<int32_t> &height) -> int32_t {
        int32_t output = 0;

        for (int32_t L = 0; L < height.size(); ++L) {
            for (int32_t R = L + 1; R < height.size(); ++R) {
                output = std::max(output, std::min(height[L], height[R]) * (R - L));
            }
        }

        return output;
    }

    static auto max_area(const std::vector<int32_t> &height) -> int32_t {
        int32_t output = 0;
        int32_t L = 0;
        auto R = static_cast<int32_t>(height.size() - 1);

        while (L < R) {
            output = std::max(output, std::min(height[L], height[R]) * (R - L));
            if (height[L] < height[R]) ++L;
            else --R;
        }

        return output;
    }
};
