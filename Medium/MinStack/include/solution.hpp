#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class [[maybe_unused]] MinStack {
public:
    MinStack() = default;

    auto push(const int32_t val) -> void {
        if (_top < (_n - 1)) {
            ++_top;
            _stack[_top] = val;
        }
    }

    auto pop() -> void {
        if (_top > -1) --_top;
    }

    [[maybe_unused]] auto top() -> int32_t {
        return _stack[_top];
    }

    [[maybe_unused]] auto get_min() -> int32_t {
        return *std::min_element(_stack, _stack + 100);
    }

private:
    int32_t _n = 100;
    int32_t _top = -1;
    int32_t _stack[100] { };
};