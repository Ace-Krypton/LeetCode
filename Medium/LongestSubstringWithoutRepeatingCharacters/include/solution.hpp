#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    auto static length_of_longest_substring(const std::string &str) -> std::size_t {
        std::size_t start = 0;
        std::size_t max_len = 0;
        std::unordered_map<char, std::size_t> substring;

        for (std::size_t i = 0; i < str.size(); ++i) {
            if (substring.count(str[i]) && substring[str[i]] >= start) {
                start = substring[str[i]] + 1;
            }

            substring[str[i]] = i;
            max_len = std::max(max_len, i - start + 1);
        }

        return max_len;
    }
};
