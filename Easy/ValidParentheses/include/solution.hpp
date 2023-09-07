#pragma once

#include <stack>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto is_valid(const std::string &str) -> bool {
        std::stack<char> st;

        for (const char &character : str) {
            if (is_opening(character)) {
                st.push(character);
            } else if (st.empty() || is_closing_match(character, st)) {
                return false;
            } else st.pop();
        }

        return st.empty();
    }

private:
    static auto is_opening(const char &a) -> bool {
        return a == '(' || a == '[' || a == '{';
    }

    static auto is_closing_match(const char &a, const std::stack<char> &st) -> bool {
        return (a == ')' && st.top() != '(')
        || (a == '}' && st.top() != '{')
        || (a == ']' && st.top() != '[');
    }
};
