#include "../include/solution.hpp"

auto main() -> int {
    size_t param_1 = RecentCounter::ping(1);
    size_t param_2 = RecentCounter::ping(100);
    size_t param_3 = RecentCounter::ping(100);
    size_t param_5 = RecentCounter::ping(3002);
    size_t param_4 = RecentCounter::ping(3001);

    std::cout << param_1 << ' ' << param_2
            << ' ' << param_3 << ' '
            << param_4 <<  ' ' << param_5;

    return 0;
}
