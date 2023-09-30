#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto close_strings(const std::string &first,
                              const std::string &second) -> bool {
        if (first.size() != second.size()) return false;

        std::unordered_map<char, size_t> first_mp;
        std::unordered_map<char, size_t> second_mp;

        for (const auto &element : first) first_mp[element]++;
        for (const auto &element : second) second_mp[element]++;

        std::string first_word, second_word;
        for (const auto &element : first_mp) {
            first_word += std::to_string(element.first)
                        + std::to_string(element.second);
        }

        for (const auto &element : second_mp) {
            second_word += std::to_string(element.first)
                         + std::to_string(element.second);
        }

        std::ranges::sort(first_word);
        std::ranges::sort(second_word);

        return first_word == second_word;
    }
};
