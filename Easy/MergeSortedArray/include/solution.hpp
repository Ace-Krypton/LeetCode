#pragma once

#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto merge(std::vector<int32_t> &first, int32_t m,
                      std::vector<int32_t> &second, int32_t n) -> void {
        first.erase(std::remove_if(first.begin() + m, first.end(),
                                   [](const int32_t&) -> bool { return true; }), first.end());
        second.erase(std::remove_if(second.begin() + n, second.end(),
                                   [](const int32_t&) -> bool { return true; }), second.end());
        first.insert(first.end(), second.begin(), second.end());
        std::ranges::sort(first);
        std::ranges::copy(first, std::ostream_iterator<char>(std::cout, " "));
    }
};
