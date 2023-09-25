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

    [[maybe_unused]] static auto product_except_self_best(
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

    static auto product_except_self(std::vector<int32_t> &nums) -> std::vector<int32_t> {
        std::vector<int32_t> output(nums.size());
        std::vector<int32_t> left_products(nums.size());
        std::vector<int32_t> right_products(nums.size());
        left_products[0] = 1;
        right_products[nums.size() - 1] = 1;

        for (size_t i = 1; i < nums.size(); ++i) {
            left_products[i] = nums[i - 1] * left_products[i - 1];
        } for (size_t i = nums.size() - 2; i > 0; --i) {
            right_products[i] = nums[i + 1] * right_products[i + 1];
        }
        right_products[0] = nums[1] * right_products[1];
        for (size_t i = 0; i < nums.size(); ++i) {
            output[i] = left_products[i] * right_products[i];
        }

        return output;
    }

    [[maybe_unused]] static auto product_except_self_my_way(
            std::vector<int32_t> &nums) -> std::vector<int32_t> {
        size_t zero_count = std::count(nums.begin(), nums.end(), 0);
        int32_t multi = std::accumulate(std::begin(nums),
                                        std::end(nums), 1,
                                        std::multiplies<>());

        std::vector<int32_t> result(nums.size(), 0);
        if (zero_count >= 2) return result;

        for (size_t i = 0; i < nums.size(); ++i) {
            if (zero_count == 1 && nums[i] == 0) {
                result[i] = multi;
            } else if (nums[i] != 0) {
                result[i] = zero_count > 0 ? 0 : multi / nums[i];
            }
        }

        return result;
    }
};
