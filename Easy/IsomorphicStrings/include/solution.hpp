#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto is_isomorphic(std::string &s, const std::string &t) -> bool {
        std::unordered_map<char, char> map_s, map_t;

        for (std::size_t i = 0; i < s.length(); ++i) {
            char c_one = s[i];
            char c_two = t[i];

            if (map_s.count(c_one) == 0) {
                map_s[c_one] = c_two;
            } else {
                if (map_s[c_one] != c_two) return false;
            }

            if (map_t.count(c_two) == 0) {
                map_t[c_two] = c_one;
            } else {
                if (map_t[c_two] != c_one) return false;
            }
        }

        for (char &i : s) i = map_s[i];
        return s == t;
    }
};
