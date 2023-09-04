#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto word_pattern(const std::string &pattern,
                             const std::string &s) -> bool {
        std::istringstream ss(s);
        std::string word;
        std::vector<std::string> words;

        while (ss >> word) {
            words.emplace_back(word);
        }

        if (words.size() != pattern.size()) return false;

        std::unordered_map<char, std::string> map_pattern;
        std::unordered_map<std::string, char> map_s;

        for (std::size_t i = 0; i < pattern.size(); ++i) {
            char ch_pattern = pattern[i];
            std::string word_words = words[i];

            if (map_pattern.count(ch_pattern) == 0) {
                map_pattern[ch_pattern] = word_words;
            } else {
                if (map_pattern[ch_pattern] != word_words) return false;
            }

            if (map_s.count(word_words) == 0) {
                map_s[word_words] = ch_pattern;
            } else {
                if (map_s[word_words] != ch_pattern) return false;
            }
        }

        return true;
    }
};
