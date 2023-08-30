#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto str_str(const std::string &haystack,
                        const std::string &needle) -> std::size_t {
        std::size_t position = haystack.find(needle);
        if (position != std::string::npos) return position;
        return -1;
    }
};
