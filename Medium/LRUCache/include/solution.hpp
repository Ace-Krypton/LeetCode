#pragma once

#include <list>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

class LRUCache {
public:
    explicit LRUCache(std::size_t capacity) : _cache_size(capacity) { };

    auto get(int32_t key) -> int32_t {
        if (_pair.find(key) != _pair.end()) {
            _doubly_list.splice(_doubly_list.begin(),
                                _doubly_list, _pair[key]);
            return _pair[key]->second;
        }

        return -1;
    }

    auto put(int32_t key, int32_t value) -> void {
        if (_pair.find(key) != _pair.end()) {
            _pair[key]->second = value;
            _doubly_list.splice(_doubly_list.begin(),
                                _doubly_list, _pair[key]);
            return;
        }

        _doubly_list.emplace_front(key, value);
        _pair[key] = _doubly_list.begin();

        if (_doubly_list.size() > _cache_size) {
            std::pair<int32_t, int32_t> &back = _doubly_list.back();
            _pair.erase(back.first);
            _doubly_list.pop_back();
        }
    }

private:
    std::size_t _cache_size;
    std::list<std::pair<int32_t, int32_t>> _doubly_list;
    std::unordered_map<int32_t, std::list<std::pair<int32_t, int32_t>>::iterator> _pair;
};
