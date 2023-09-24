#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
     static auto kids_with_candies(std::vector<int32_t> &candies,
                                   const int32_t extra_candies) -> std::vector<bool> {
         int32_t max = *max_element(candies.begin(), candies.end());
         std::vector<bool> result(candies.size(), false);

         for(size_t i = 0; i<candies.size(); ++i){
             if(candies[i] + extra_candies >= max){
                 result[i] = true;
             }
         }

         return result;
    }
};
