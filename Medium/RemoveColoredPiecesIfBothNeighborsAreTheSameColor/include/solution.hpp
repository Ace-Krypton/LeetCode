#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto winner_of_game(const std::string &colors) -> bool {
        int32_t bob = 0;
        int32_t alice = 0;

        for (size_t i = 1; i < colors.size() - 1; ++i) {
            if (colors[i - 1] == colors[i]
                && colors[i] == colors[i + 1]) {
                if(colors[i] == 'A') ++alice;
                if(colors[i] == 'B') ++bob;
            }
        }

        return (alice >= (bob + 1));
    }
};
