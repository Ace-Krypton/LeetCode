#include "../include/solution.hpp"

auto main() -> int {
    auto *cache = new LRUCache(2);
    cache->put(1, 1);
    cache->put(2, 2);
    std::cout << cache->get(1) << '\n';
    cache->put(3, 3);
    std::cout << cache->get(2) << '\n';
    cache->put(4, 4);
    std::cout << cache->get(1) << '\n';
    std::cout << cache->get(3) << '\n';
    std::cout << cache->get(4) << '\n';
    delete cache;

    return 0;
}
