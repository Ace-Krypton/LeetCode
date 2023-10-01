#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto reverse_words(std::string &word) -> std::string {
        std::stringstream ss(word);
        std::string result;

        while (ss >> word) {
            std::string reversed_word(word.rbegin(), word.rend());
            result += reversed_word + " ";
        }

        if (!result.empty()) result.pop_back();

        return result;
    }
};
