#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto is_palindrome(std::string &word) -> bool {
        std::transform(word.begin(), word.end(), word.begin(),
                       [](const unsigned char &c) -> int32_t {
            return std::tolower(c);
        });

        word.erase(std::remove_if(word.begin(), word.end(),
                               [](const char &c) -> bool {
            return !std::isalnum(c);
        } ), word.end());

        if (word.length() % 2 == 1) {
            for (std::size_t i = word.length() / 2,
                    j = word.length() / 2; j < word.length(); --i, ++j) {
                if (word[i] != word[j]) return false;
            }
        } else {
            for (std::size_t i = word.length() / 2 - 1,
                    j = word.length() / 2; i != -1; --i, ++j) {
                if (word[i] != word[j]) return false;
            }
        }

        return true;
    }
};
