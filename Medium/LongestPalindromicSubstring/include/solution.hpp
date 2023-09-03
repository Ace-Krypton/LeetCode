#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    [[maybe_unused]] static auto longest_palindrome_tle(const std::string &s) -> std::string {
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

    static auto longest_palindrome(const std::string &s) -> std::string {
        if (s.empty()) return { };

        int32_t start = 0;
        int32_t end = 0;

        for (int32_t i = 0; i < s.length(); ++i) {
            int32_t len1 = expand_around_center(s, i, i);
            int32_t len2 = expand_around_center(s, i, i + 1);

            int32_t len = std::max(len1, len2);

            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }

    static auto expand_around_center(const std::string &s,
                                     int32_t left, int32_t right) -> int32_t {
        while (left >= 0 && right < s.length()
            && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};
