#pragma once

#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto predict_party_victory(const std::string &senate) -> std::string {
        std::queue<size_t> rad, dire;

        for (size_t i = 0; i < senate.size(); ++i) {
            if(senate[i]=='R') rad.push(i);
            else dire.push(i);
        }

        while (true) {
            if (rad.empty()) return "Dire";
            if (dire.empty()) return "Radiant";

            size_t rad_first = rad.front();
            size_t dire_first = dire.front();
            rad.pop();
            dire.pop();

            if (rad_first < dire_first) rad.push(rad_first + senate.size());
            else dire.push(dire_first + senate.size());
        }
    }
};
