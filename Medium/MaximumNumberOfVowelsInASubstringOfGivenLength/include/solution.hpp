#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto max_vowels(const std::string &s,
                           const int32_t k) -> size_t {
        size_t left = 0, right = 0, current_vowels = 0, max_vowels = 0;

        while (right < s.length()) {
            if (is_vowel(s[right])) ++current_vowels;
            if (right - left + 1 > k) {
                if (is_vowel(s[left])) --current_vowels;
                ++left;
            }
            max_vowels = std::max(current_vowels, max_vowels);
            ++right;
        }

        return max_vowels;
    }

    static auto is_vowel(const char &ch) -> bool {
        return ch == 'a' || ch == 'e' || ch == 'i'
            || ch == 'o' || ch == 'u';
    }
};
