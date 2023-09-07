#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto insert(std::vector<std::vector<int32_t>> &intervals,
                       const std::vector<int32_t> &new_interval)
                       -> std::vector<std::vector<int32_t>> {
        intervals.emplace_back(new_interval);
        if (intervals.size() <= 1) return intervals;
        std::ranges::sort(intervals, compare);
        std::vector<std::vector<int32_t>> output = { intervals[0] };

        for (std::size_t i = 1; i < intervals.size(); ++i) {
            auto &current = output.back();
            if (current[1] >= intervals[i][0]) {
                current[1] = std::max(current[1], intervals[i][1]);
            } else output.push_back(intervals[i]);
        }

        return output;
    }

private:
    static auto compare(const std::vector<int32_t> &a,
                        const std::vector<int32_t> &b) -> bool {
        return a[0] < b[0];
    }
};
