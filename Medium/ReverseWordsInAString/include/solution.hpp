#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto l_trim(std::string &str) -> void {
        str.erase(str.begin(),
                  std::find_if(str.begin(), str.end(),
                               [](const unsigned char &ch) -> bool {
                      return !std::isspace(ch);
                  }));
    }

    static auto r_trim(std::string &str) -> void {
        str.erase(std::find_if(str.rbegin(), str.rend(),
                               [](const unsigned char &ch) -> bool {
            return !std::isspace(ch);
        }).base(), str.end());

        auto new_end =
                std::unique(str.begin(), str.end(),
                            [](const char &a, const char &b) -> bool {
                    return std::isspace(a) && std::isspace(b);
        });
        str.erase(new_end, str.end());
    }

    static auto trim(std::string &str) -> void {
        l_trim(str);
        r_trim(str);
    }

    [[maybe_unused]] static auto reverse_words_tle(const std::string &words) -> std::string {
        std::string word;
        std::stringstream ss(words);
        std::vector<std::string> reversed;

        while (ss >> word) reversed.emplace_back(word);
        std::reverse(reversed.begin(), reversed.end());

        size_t total_length = 0;
        for (const std::string &s : reversed) total_length += s.length();

        std::string result;
        result.reserve(total_length);

        for (const std::string &s : reversed) {
            if (!result.empty()) result += " ";
            result += s;
        }

        trim(result);

        return result;
    }

    static auto reverse_words(const std::string &words) -> std::string {
        std::string result;
        size_t current = 0;
        size_t end = words.length();

        while (current < end) {
            while (current < end && words[current] == ' ') ++current;
            if (current >= end) break;
            size_t next = current + 1;
            while (next < end && words[next] != ' ') ++next;
            std::string sub = words.substr(current, next - current);
            if (!result.empty()) {
                std::stringstream ss;
                ss << sub << " " << result;
                result = ss.str();
            } else result = sub;
            current = next + 1;
        }

        return result;
    }
};
