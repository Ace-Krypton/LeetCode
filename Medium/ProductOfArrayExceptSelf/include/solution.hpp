#pragma once

#include <vector>
#include <iostream>
#include <ranges>
#include <numeric>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    [[maybe_unused]] static auto product_except_self_TLE(
            std::vector<int32_t> &nums) -> std::vector<int32_t> {
        std::vector<int32_t> output;

        for (std::size_t i = 0; i < nums.size(); ++i) {
            int32_t product = 1;

            for (std::size_t j = 0; j < nums.size(); ++j) {
                if (j == i) continue;
                product *= nums[j];
            }

            output.emplace_back(product);
        }

        return output;
    }

    static auto product_except_self(
            std::vector<int32_t> &nums) -> std::vector<int32_t> {
        std::vector<int32_t> output(nums.size(), 1);

        int32_t left_product = 1;
        for (std::size_t i = 0; i < nums.size(); ++i) {
            output[i] *= left_product;
            left_product *= nums[i];
        }

        int32_t right_product = 1;
        for (std::size_t i = nums.size(); i > 0; --i) {
            output[i - 1] *= right_product;
            right_product *= nums[i - 1];
        }

        return output;
    }
};
