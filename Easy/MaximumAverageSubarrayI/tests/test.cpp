#include "../include/solution.hpp"

class MaximumAverageSubarrayI : public ::testing::Test {
protected:
    ~MaximumAverageSubarrayI() override = default;
};

TEST_F(MaximumAverageSubarrayI, FirstTest) {
    std::vector<int32_t> nums = {1, 12, -5, -6, 50, 3};

    double result = Solution::find_max_average(nums, 4);

    double expected = 12.75000;
    ASSERT_EQ(result, expected);
}

TEST_F(MaximumAverageSubarrayI, SecondTest) {
    std::vector<int32_t> nums = {5};

    double result = Solution::find_max_average(nums, 1);

    double expected = 5.00000;
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
