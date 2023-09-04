#pragma once

#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto is_anagram(const std::string &s,
                           const std::string &t) -> bool {

        if (s.length() != t.length()) return false;

        std::unordered_map<char, std::size_t> map_s;
        std::unordered_map<char, std::size_t> map_t;

        for (std::size_t i = 0; i < s.length(); ++i) {
            ++map_s[s[i]];
            ++map_t[t[i]];
        }

        for (const auto &pair : map_s) {
            if (map_t[pair.first] != pair.second) {
                return false;
            }
        }

        return true;
    }
};
