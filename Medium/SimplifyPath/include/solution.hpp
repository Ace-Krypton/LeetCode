#pragma once

#include <stack>
#include <vector>
#include <ranges>
#include <iostream>
#include <algorithm>
#include <string_view>
#include <gtest/gtest.h>

class Solution {
public:
    static auto simplify_path(const std::string &path) -> std::string {
        std::deque<std::string> st;
        constexpr char delim = '/';
        std::vector<std::string> tokens;

        for (const auto &subrange
            : std::ranges::views::split(path, delim)) {
            tokens.emplace_back(subrange.begin(), subrange.end());
        }

        for (const std::string &token : tokens) {
            if (!st.empty() && token == "..") st.pop_back();
            else if (!token.empty() && token != "."
                && token != "..") st.push_back(token);
        }

        if (st.empty()) return "/";

        std::string result;

        for (const std::string &dir : st) {
            result += "/" + dir;
        }

        return result;
    }
};
