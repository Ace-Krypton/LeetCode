#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto can_construct(const std::string &ransom_note,
                              const std::string &magazine) -> bool {
        std::unordered_map<char, std::size_t> char_count;

        for (const char &ch : magazine) char_count[ch]++;

        for (const char &ch : ransom_note) {
            if (char_count.find(ch) == char_count.end()
                || char_count[ch] <= 0) {
                return false;
            } else char_count[ch]--;
        }

        return true;
    }
};
