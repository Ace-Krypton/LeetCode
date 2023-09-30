#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>
#include <unordered_map>

class Solution {
public:
    static auto calculate(const std::string &s) -> int32_t {
        std::stack<int32_t> st;
        int32_t sum = 0, sign = 1;

        std::unordered_map<char, std::function<void()>> actions = {
                {'+', [&]() -> void { sign = 1; }},
                {'-', [&]() -> void { sign = -1; }},
                {'(', [&]() -> void {
                    st.push(sum);
                    st.push(sign);
                    sum = 0; sign = 1;
                }}, {')', [&]() -> void{
                    sum = sum * st.top();
                    st.pop();
                    sum += st.top();
                    st.pop();
                }}
        };

        for (size_t i = 0; i < s.size(); ++i) {
            if (s[i] >= '0' && s[i] <= '9') {
                int32_t num = 0;

                while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
                    num = num * 10 + (s[i] - '0'), ++i;
                }

                sum = sum + sign * num, --i;
            } else if (actions.find(s[i]) != actions.end()) {
                actions[s[i]]();
            }
        }

        return sum;
    }
};
