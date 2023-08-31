#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    auto static is_subsequence(const std::string_view &subsequence,
                               const std::string_view &sequence) -> bool {
        short idx = 0;
        for (const char &seq : sequence)
            if (seq == subsequence[idx]) idx++;
        return (idx == subsequence.length());
    }
};
