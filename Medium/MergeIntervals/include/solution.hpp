#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto merge(std::vector<std::vector<uint16_t>> &intervals)
        -> std::vector<std::vector<uint16_t>> {
        if (intervals.size() <= 1) return intervals;
        std::ranges::sort(intervals, compare);
        std::vector<std::vector<uint16_t>> output = { intervals[0] };

        for (std::size_t i = 1; i < intervals.size(); ++i) {
            auto &current = output.back();
            if (current[1] >= intervals[i][0]) {
                current[1] = std::max(current[1], intervals[i][1]);
            } else output.push_back(intervals[i]);
        }

        return output;
    }

private:
    static auto compare(const std::vector<uint16_t> &a,
                        const std::vector<uint16_t> &b) -> bool {
        return a[0] < b[0];
    }
};
