#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    auto static gcd_of_strings(const std::string &first,
                               const std::string &second) -> std::string {
        std::function<std::string(const std::string &,
                                  const std::string &)> gcd_helper =
                [&](const std::string &f,
                    const std::string &s) -> std::string {
                    if (f + s != s + f) return { };
                    else if (f == s) return f;
                    else if (f.length() > s.length()) return gcd_helper(
                            f.substr(s.length()), s);
                    else return gcd_helper(s.substr(f.length()), f);
                };

        return gcd_helper(first, second);
    }
};
