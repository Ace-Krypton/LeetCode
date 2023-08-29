#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto length_of_last_word(const std::string &words) -> std::size_t {
        std::string word;
        std::size_t last_word_length = 0;
        std::stringstream ss(words);

        while (ss >> word) {
            last_word_length = word.size();
        }

        return last_word_length;
    }
};
