#include "../include/solution.hpp"

class IntegerToRoman : public ::testing::Test {
protected:
    ~IntegerToRoman() override = default;
};

TEST_F(IntegerToRoman, FirstTest) {
    int32_t value = 3;

    std::string result = Solution::int_to_roman(value);

    std::string expected = "III";
    ASSERT_EQ(result, expected);
}

TEST_F(IntegerToRoman, SecondTest) {
    int32_t value = 58;

    std::string result = Solution::int_to_roman(value);

    std::string expected = "LVIII";
    ASSERT_EQ(result, expected);
}

TEST_F(IntegerToRoman, ThirdTest) {
    int32_t value = 1994;

    std::string result = Solution::int_to_roman(value);

    std::string expected = "MCMXCIV";
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
