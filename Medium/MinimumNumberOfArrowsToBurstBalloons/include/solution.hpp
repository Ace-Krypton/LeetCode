#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto find_min_arrow_shots(std::vector<std::vector<int32_t>> &points) -> std::size_t {
        if (points.empty()) return 0;

        std::ranges::sort(points, compare);
        std::size_t arrows = 1;
        std::size_t end = points[0][1];

        for (const auto &balloon : points) {
            if (balloon[0] > end) {
                arrows++;
                end = balloon[1];
            }
        }

        return arrows;
    }

private:
    static constexpr auto compare(const std::vector<int32_t> &a,
                                  const std::vector<int32_t> &b) -> bool {
        return a[0] < b[0];
    }
};
