#include "../include/solution.hpp"

class SingleNumberII : public ::testing::Test {
protected:
    ~SingleNumberII() override = default;
};

TEST_F(SingleNumberII, FirstTest) {
    std::vector<int32_t> nums = {2, 2, 3, 2};

    int32_t result = Solution::single_number(nums);
    int32_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(SingleNumberII, SecondTest) {
    std::vector<int32_t> nums = {0, 1, 0, 1, 0, 1, 99};

    int32_t result = Solution::single_number(nums);
    int32_t expected = 99;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
