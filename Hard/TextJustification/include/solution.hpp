#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto full_justify(const std::vector<std::string> &words,
                             int32_t max_width) -> std::vector<std::string> {
        std::vector<std::string> res;
        std::vector<std::string> cur;
        std::size_t num_of_letters = 0;

        for (const std::string &word : words) {
            if (word.size() + cur.size() + num_of_letters > max_width) {
                for (int i = 0; i < max_width - num_of_letters; i++) {
                    cur[i % (cur.size() - 1 ? cur.size() - 1 : 1)] += ' ';
                }
                res.emplace_back("");
                for (const std::string &s : cur) res.back() += s;
                cur.clear();
                num_of_letters = 0;
            }
            cur.push_back(word);
            num_of_letters += word.size();
        }

        std::string last_line;
        for (const std::string &s : cur) last_line += s + ' ';
        last_line = last_line.substr(0, last_line.size()-1);
        while (last_line.size() < max_width) last_line += ' ';
        res.push_back(last_line);

        return res;
    }
};
