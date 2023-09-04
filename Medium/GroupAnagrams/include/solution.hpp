#pragma once

#include <ranges>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <gtest/gtest.h>

class Solution {
public:
    [[maybe_unused]] static auto group_anagrams_TLE(const std::vector<std::string> &strs)
        -> std::vector<std::vector<std::string>> {
        if (strs.empty()) return { { } };

        std::vector<std::vector<std::string>> result;
        std::vector<bool> added(strs.size(), false);

        for (std::size_t left = 0; left < strs.size(); ++left) {
            if (added[left]) continue;

            std::vector<std::string> tobe_added;
            tobe_added.emplace_back(strs[left]);
            added[left] = true;

            for (std::size_t right = left + 1; right < strs.size(); ++right) {
                if (!added[right] && is_anagram(strs[left], strs[right])) {
                    tobe_added.emplace_back(strs[right]);
                    added[right] = true;
                }
            }

            result.emplace_back(tobe_added);
        }

        return result;
    }

    static auto group_anagrams(std::vector<std::string> &strs)
        -> std::vector<std::vector<std::string>> {
        if (strs.empty()) return { { } };

        std::map<std::string, std::vector<std::string>> grouped;
        std::ranges::for_each(strs, [&grouped](std::string &str) -> void {
            std::string sorted = str;
            std::ranges::sort(sorted);
            grouped[sorted].emplace_back(std::move(str));
        });

        std::vector<std::vector<std::string>> result;
        for (auto &[key, value] : grouped) {
            result.push_back(std::move(value));
        }

        return result;
    }

private:
    static auto is_anagram(const std::string &s, const std::string &t) -> bool {
        if (s.length() != t.length()) return false;
        std::string sorted_str1 = s;
        std::string sorted_str2 = t;
        std::ranges::sort(sorted_str1);
        std::ranges::sort(sorted_str2);
        return sorted_str1 == sorted_str2;
    }
};
