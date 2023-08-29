#include "../include/solution.hpp"

class TappingRainWater : public ::testing::Test {
protected:
    ~TappingRainWater() override = default;
};

TEST_F(TappingRainWater, FirstTest) {
    std::vector<int32_t> elements = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    std::size_t result = Solution::trap(elements);
    std::size_t expected = 6;

    ASSERT_EQ(result, expected);
}

TEST_F(TappingRainWater, SecondTest) {
    std::vector<int32_t> elements = {4, 2, 0, 3, 2, 5};

    std::size_t result = Solution::trap(elements);
    std::size_t expected = 9;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
