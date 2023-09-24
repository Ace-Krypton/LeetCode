#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto merge_alternately(const std::string &first,
                                  const std::string &second) -> std::string {
        std::string result;
        size_t index = 0;

        while (index < first.length() || index < second.length()) {
            if (index < first.length()) result += first[index];
            if (index < second.length()) result += second[index];
            ++index;
        }

        return result;
    }
};
