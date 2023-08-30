#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto longest_common_prefix(std::vector<std::string> &strs) -> std::string {
        std::string prefix { };

        for (std::size_t i = 0; i < strs[0].size(); ++i) {
            const char character = strs[0][i];
            for (std::string const &element : strs)
                if (element[i] != character) return prefix;
            prefix += character;
        }

        return prefix;
    }
};
