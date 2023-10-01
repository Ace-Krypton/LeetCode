#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto asteroid_collision(const std::vector<int32_t> &asteroids)
                                    -> std::vector<int32_t> {
        std::stack<int32_t> st;

        for (const int32_t asteroid : asteroids) {
            if (asteroid > 0 || st.empty()) st.push(asteroid);
            else {
                while (!st.empty() && st.top() > 0
                    && st.top() < std::abs(asteroid)) {
                    st.pop();
                } if (!st.empty() && st.top() == std::abs(asteroid)) {
                    st.pop();
                } else {
                    if (st.empty() || st.top() < 0) {
                        st.push(asteroid);
                    }
                }
            }
        }

        std::vector<int32_t> result(st.size());
        for(auto i = static_cast<int32_t>(result.size() - 1); i >= 0; --i) {
            result[i] = st.top();
            st.pop();
        }


        return result;
    }
};
