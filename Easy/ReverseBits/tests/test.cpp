#include "../include/solution.hpp"

class ReverseBits : public ::testing::Test {
protected:
    ~ReverseBits() override = default;
};

TEST_F(ReverseBits, FirstTest) {
    uint32_t n = 0b00000010100101000001111010011100;

    uint32_t result = Solution::reverse_bits(n);
    uint32_t expected = 964176192;

    ASSERT_EQ(result, expected);
}

TEST_F(ReverseBits, SecondTest) {
    uint32_t n = 0b11111111111111111111111111111101;

    uint32_t result = Solution::reverse_bits(n);
    uint32_t expected = 3221225471;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
