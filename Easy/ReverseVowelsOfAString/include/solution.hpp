#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto reverse_vowels(std::string &word) -> std::string {
        size_t left = 0;
        size_t right = word.size() - 1;

        while (left < right) {
            while (left < right && !is_vowel(word[left])) {
                ++left;
            } while (left < right && !is_vowel(word[right])) {
                --right;
            }
            std::swap(word[left], word[right]);
            ++left, --right;
        }

        return word;
    }

    static auto is_vowel(char c) -> bool {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
};
