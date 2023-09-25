#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    [[maybe_unused]] static auto increasing_triplet_tle(
            const std::vector<int32_t> &nums) -> bool {
        for (size_t i = 0; i < nums.size(); ++i) {
            for (size_t j = i + 1; j < nums.size(); ++j) {
                for (size_t k = j + 1; k < nums.size(); ++k) {
                    if (nums[i] < nums[j] && nums[j] < nums[k]) {
                        return true;
                    }
                }
            }
        }

        return false;
    }

    [[maybe_unused]] static auto increasing_triplet_On_Space(
            const std::vector<int32_t> &nums) -> bool {
        if (nums.size() < 3) return false;

        std::vector<int32_t> left_min(nums.size());
        left_min[0] = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            left_min[i] = std::min(left_min[i - 1], nums[i]);
        }

        std::vector<int32_t> right_max(nums.size());
        right_max[nums.size() - 1] = nums[nums.size() - 1];
        for (auto i = static_cast<int32_t>(nums.size() - 2); i >= 0; --i) {
            right_max[i] = std::max(right_max[i + 1], nums[i]);
        }

        for (size_t i = 0; i < nums.size(); ++i) {
            if (left_min[i] < nums[i] && nums[i] < right_max[i]) {
                return true;
            }
        }

        return false;
    }

    static auto increasing_triplet(const std::vector<int32_t> &nums) -> bool {
        int32_t first = std::numeric_limits<int32_t>::max();
        int32_t second = std::numeric_limits<int32_t>::max();

        for (const auto &num : nums) {
            if (num <= first) first = num;
            else if (num <= second) second = num;
            else return true;
        }

        return false;
    }
};
