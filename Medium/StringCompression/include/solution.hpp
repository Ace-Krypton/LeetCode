#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    [[maybe_unused]] static auto compress_space(std::vector<char> &chars) -> size_t {
        std::unordered_map<char, size_t> mp;
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

    static auto compress(std::vector<char> &chars) -> size_t {
        size_t index = 0;
        size_t current = 0;

        while (current < chars.size()) {
            size_t next = current;

            while (next < chars.size()
                && chars[next] == chars[current]) {
                ++next;
            }

            chars[index++] = chars[current];

            if (next - current > 1) {
                std::string count = std::to_string(next - current);
                for (const char &ch : count) {
                    chars[index++] = ch;
                }
            }

            current = next;
        }

        return index;
    }
};
