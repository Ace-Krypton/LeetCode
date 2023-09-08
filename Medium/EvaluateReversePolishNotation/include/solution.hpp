#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

#include <stack>
#include <vector>
#include <string>
#include <unordered_map>
#include <functional>

class Solution {
public:
    static auto eval_RPN(const std::vector<std::string>& tokens) -> int32_t {
        std::stack<int32_t> st;
        std::unordered_map<char, std::function<int32_t(int32_t, int32_t)>> operators = {
                {'+', [](int32_t a, int32_t b) -> int32_t { return a + b; }},
                {'-', [](int32_t a, int32_t b) -> int32_t { return a - b; }},
                {'*', [](int32_t a, int32_t b) -> int32_t { return a * b; }},
                {'/', [](int32_t a, int32_t b) -> int32_t { return a / b; }}
        };

        for (const std::string &element : tokens) {
            if (element.size() == 1 && is_operator(element[0])) {
                int32_t b = st.top();
                st.pop();
                int32_t a = st.top();
                st.pop();

                int32_t result = operators[element[0]](a, b);
                st.push(result);
            } else {
                st.push(std::stoi(element));
            }
        }

        return st.top();
    }

private:
    static auto is_operator(char token) -> bool {
        return (token == '+' || token == '-' ||
                token == '*' || token == '/');
    }
};
