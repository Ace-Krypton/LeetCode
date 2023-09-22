#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    auto static add_binary(const std::string &first,
                           const std::string &second) -> std::string {
        size_t carry = 0;
        std::string result;
        size_t first_size = first.length();
        size_t second_size = second.length();

        while (first_size > 0 || second_size > 0 || carry > 0) {
            size_t sum = carry;

            if (first_size > 0) {
                sum += first[first_size - 1] - '0';
                first_size--;
            } if (second_size > 0) {
                sum += second[second_size - 1] - '0';
                second_size--;
            }
            result.insert(result.begin(),
                          static_cast<char>('0' + (sum % 2)));
            carry = sum / 2;
        }

        return result;
    }
};
