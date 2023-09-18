#pragma once

#include <list>
#include <iostream>
#include <unordered_map>
#include <gtest/gtest.h>

class LRUCache {
public:
    explicit LRUCache(const std::uint32_t capacity) : _cache_size(capacity) { };

    auto get(const int32_t key) -> int32_t {
        if (auto it = _pair.find(key); it != _pair.end()) {
            _doubly_list.splice(_doubly_list.begin(),
                                _doubly_list, it->second);
            return it->second->second;
        }

        return -1;
    }

    auto put(const int32_t key, const int32_t value) -> void {
        if (auto it = _pair.find(key); it != _pair.end()) {
            it->second->second = value;
            _doubly_list.splice(_doubly_list.begin(),
                                _doubly_list, it->second);
        } else {
            _doubly_list.emplace_front(key, value);
            _pair[key] = _doubly_list.begin();

            if (_doubly_list.size() > _cache_size) {
                auto &back = _doubly_list.back();
                _pair.erase(back.first);
                _doubly_list.pop_back();
            }
        }
    }

private:
    std::uint32_t _cache_size;
    std::list<std::pair<int32_t, int32_t>> _doubly_list;
    std::unordered_map<int32_t, std::list<std::pair<int32_t, int32_t>>::iterator> _pair;
};
