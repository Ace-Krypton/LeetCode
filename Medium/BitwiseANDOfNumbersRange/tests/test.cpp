#include "../include/solution.hpp"

class BitwiseANDOfNumbersRange : public ::testing::Test {
protected:
    ~BitwiseANDOfNumbersRange() override = default;
};

TEST_F(BitwiseANDOfNumbersRange, FirstTest) {
    int32_t left = 0;
    int32_t right = 0;

    int32_t result = Solution::range_bitwise_and(left, right);
    int32_t expected = 0;

    ASSERT_EQ(result, expected);
}

TEST_F(BitwiseANDOfNumbersRange, SecondTest) {
    int32_t left = 5;
    int32_t right = 7;

    int32_t result = Solution::range_bitwise_and(left, right);
    int32_t expected = 4;

    ASSERT_EQ(result, expected);
}

TEST_F(BitwiseANDOfNumbersRange, ThirdTest) {
    int32_t left = 1;
    int32_t right = 2147483647;

    int32_t result = Solution::range_bitwise_and(left, right);
    int32_t expected = 0;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
