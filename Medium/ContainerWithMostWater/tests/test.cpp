#include "../include/solution.hpp"

class ContainerWithMostWater : public ::testing::Test {
protected:
    ~ContainerWithMostWater() override = default;
};

TEST_F(ContainerWithMostWater, FirstTest) {
    std::vector<int32_t> elements = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int32_t result = Solution::max_area(elements);
    int32_t expected = 49;

    ASSERT_EQ(result, expected);
}

TEST_F(ContainerWithMostWater, SecondTest) {
    std::vector<int32_t> elements = {1, 1};

    int32_t result = Solution::max_area(elements);
    int32_t expected = 1;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
