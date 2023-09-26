#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto compress(std::vector<char> &chars) -> size_t {
        std::unordered_map<char, int> mp;
        std::string str;

        for (size_t i = 0; i < chars.size(); ++i) {
            if (mp.count(chars[i]) || mp.empty()) mp[chars[i]]++;
            else if (!mp.empty()) {
                std::string temp = std::to_string(mp[chars[i - 1]]);
                str += chars[i - 1];
                if (temp != "1") str += temp;
                mp.clear();
                mp[chars[i]] = 1;
            }
        }

        std::string temp1 = std::to_string(mp[chars[chars.size() - 1]]);
        str += chars[chars.size() - 1];
        if (temp1 != "1") str += temp1;

        for (size_t i = 0; i < str.length(); ++i) {
            chars[i] = str[i];
        }

        return str.length();
    }
};
