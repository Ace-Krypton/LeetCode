#pragma once

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class MyHashMap {
public:
    MyHashMap() = default;

    static auto hash(const int32_t x) -> int32_t {
        return (2 * x + 97) % 30011;
    }

    auto put(const int32_t key, const int32_t value) -> void {
        int32_t i = hash(key);
        for (auto &[k, v] : _table[i]) {
            if (key == k) {
                v = value;
                return;
            }
        }
        _table[i].emplace_back(key, value);
    }

    auto get(const int32_t key) -> int32_t {
        int32_t i = hash(key);
        for (auto &[k, v]: _table[i]) {
            if (k == key) return v;
        }
        return -1;
    }

    auto remove(const int32_t key) -> void {
        int32_t i = hash(key);
        for (auto it = _table[i].begin();
            it != _table[i].end(); ++it) {
            if ((*it).first == key) {
                _table[i].erase(it);
                return;
            }
        }
    }

private:
    std::list<std::pair<int32_t,int32_t>> _table[30011];
};
