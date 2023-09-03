#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto longest_palindrome(const std::string &s) -> std::string {
        std::string ans;
        std::size_t max_length = 0;

        for (std::size_t i = 0; i < s.size(); ++i) {
            std::string str;
            for (std::size_t j = i; j < s.size(); ++j) {
                str += s[j];
                std::string rev = str;
                std::ranges::reverse(rev);

                if (str == rev && str.length() > max_length) {
                    ans = str;
                    max_length = str.length();
                }
            }
        }

        return ans;
    }
};
