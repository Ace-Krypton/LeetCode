#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto remove_stars(const std::string &word) -> std::string {
        std::stack<char> st;

        for (const char &ch : word) {
            if (ch == '*') st.pop();
            else st.push(ch);
        }

        std::string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        std::ranges::reverse(result);
        return result;
    }
};
