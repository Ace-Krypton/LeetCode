#pragma once

#include <vector>
#include <random>
#include <ranges>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class [[maybe_unused]] RandomizedSet {
public:
    RandomizedSet() = default;

    auto insert(int32_t value) -> bool {
        if (_index.find(value) != _index.end()) return false;
        _elements.emplace_back(value);
        _index[value] = static_cast<int32_t>(_elements.size() - 1);
        return true;
    }

    auto remove(int32_t value) -> bool {
        if (_index.find(value) == _index.end()) return false;
        _index.erase(value);
        return true;
    }

    [[maybe_unused]] auto get_random() -> int32_t {
        std::uniform_int_distribution<int32_t>
                random(0, static_cast<int32_t>(_index.size() - 1));
        auto random_iter =
                std::next(_index.begin(), random(_generator));
        return random_iter->first;
    }

private:
    std::vector<int32_t> _elements;
    std::unordered_map<int32_t, int32_t> _index;
    std::random_device rd;
    std::mt19937 _generator = std::mt19937(rd());
};
