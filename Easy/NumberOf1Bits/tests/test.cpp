#include "../include/solution.hpp"

class NumberOf1Bits : public ::testing::Test {
protected:
    ~NumberOf1Bits() override = default;
};

TEST_F(NumberOf1Bits, FirstTest) {
    uint32_t n = 0b00000000000000000000000000001011;

    size_t result = Solution::hamming_weight(n);
    size_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(NumberOf1Bits, SecondTest) {
    uint32_t n = 0b00000000000000000000000010000000;

    size_t result = Solution::hamming_weight(n);
    size_t expected = 1;

    ASSERT_EQ(result, expected);
}

TEST_F(NumberOf1Bits, ThirdTest) {
    uint32_t n = 0b11111111111111111111111111111101;

    size_t result = Solution::hamming_weight(n);
    size_t expected = 31;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
