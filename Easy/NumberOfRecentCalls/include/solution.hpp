#pragma once

#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class RecentCounter {
public:
    RecentCounter() = default;

    static auto ping(const int32_t t) -> int32_t {
        _queue.push(t);
        while (_queue.front() < t - 3000) {
            _queue.pop();
        }
        return static_cast<int32_t>(_queue.size());
    }

private:
    static inline std::queue<int32_t> _queue;
};
