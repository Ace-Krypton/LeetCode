#include "../include/solution.hpp"

class RotateArray : public ::testing::Test {
protected:
    ~RotateArray() override = default;
};

TEST_F(RotateArray, FirstTest) {
    std::vector<int32_t> elements = {1, 2, 3, 4, 5, 6, 7};
    std::size_t steps = 3;

    Solution::rotate(elements, steps);

    std::vector<int32_t> expected = {5, 6, 7, 1, 2, 3, 4};
    ASSERT_EQ(elements, expected);
}

TEST_F(RotateArray, SecondTest) {
    std::vector<int32_t> elements = {-1, -100, 3, 99};
    std::size_t steps = 2;

    Solution::rotate(elements, steps);

    std::vector<int32_t> expected = {3, 99, -1, -100};
    ASSERT_EQ(elements, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
