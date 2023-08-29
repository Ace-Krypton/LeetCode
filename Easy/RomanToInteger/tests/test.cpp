#include "../include/solution.hpp"

class RomanToInteger : public ::testing::Test {
protected:
    ~RomanToInteger() override = default;
};

TEST_F(RomanToInteger, FirstTest) {
    std::string value = "III";

    int32_t result = Solution::roman_to_int(value);

    int32_t expected = 3;
    ASSERT_EQ(result, expected);
}

TEST_F(RomanToInteger, SecondTest) {
    std::string value = "LVIII";

    int32_t result = Solution::roman_to_int(value);

    int32_t expected = 58;
    ASSERT_EQ(result, expected);
}

TEST_F(RomanToInteger, ThirdTest) {
    std::string value = "MCMXCIV";

    int32_t result = Solution::roman_to_int(value);

    int32_t expected = 1994;
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
