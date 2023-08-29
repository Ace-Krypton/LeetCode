#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <gtest/gtest.h>

class Solution {
public:
    static auto int_to_roman(int32_t &num) -> std::string {
        const std::string_view ones[] = {"","I","II","III",
                                         "IV","V","VI","VII","VIII","IX"};
        const std::string_view tens[] = {"","X","XX","XXX",
                                         "XL","L","LX","LXX","LXXX","XC"};
        const std::string_view hrns[] = {"","C","CC","CCC",
                                         "CD","D","DC","DCC","DCCC","CM"};
        const std::string_view ths[]={"","M","MM","MMM"};

        std::string result;
        result += ths[num / 1000];
        result += hrns[(num % 1000) / 100];
        result += tens[(num % 100) / 10];
        result += ones[num % 10];

        return result;
    }
};
