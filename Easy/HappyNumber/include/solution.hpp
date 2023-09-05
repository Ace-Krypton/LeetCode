#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class Solution {
public:
    static auto is_happy(const int32_t n) -> bool {
        int32_t slow = n, fast = n;

        do {
            slow = calculate(slow);
            fast = calculate(calculate(fast));
        } while (fast != slow);

        return slow == 1;
    }


private:
    static auto calculate(int32_t n) -> int32_t {
        int32_t sum = 0;

        while (n > 0) {
            int32_t digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }
};
