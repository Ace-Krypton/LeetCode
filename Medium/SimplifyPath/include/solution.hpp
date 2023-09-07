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

        std::string token;
        std::istringstream iss(path);

        while (std::getline(iss, token, delim)) {
            if (!token.empty() && token != "." && token != "..") {
                st.push_back(token);
            } else if (!st.empty() && token == "..") {
                st.pop_back();
            }
        }

        if (st.empty()) return "/";

        std::string result;

        for (const std::string &dir : st) {
            result += "/" + dir;
        }

        return result;
    }
};
