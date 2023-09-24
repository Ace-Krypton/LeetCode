#include "../include/solution.hpp"

class GreatestCommonDivisorOfStrings : public ::testing::Test {
protected:
    ~GreatestCommonDivisorOfStrings() override = default;
};

TEST_F(GreatestCommonDivisorOfStrings, FirstTest) {
    std::string first = "ABCABC";
    std::string second = "ABC";

    std::string result = Solution::gcd_of_strings(first, second);
    std::string expected = "ABC";

    ASSERT_EQ(result, expected);
}

TEST_F(GreatestCommonDivisorOfStrings, SecondTest) {
    std::string first = "ABABAB";
    std::string second = "ABAB";

    std::string result = Solution::gcd_of_strings(first, second);
    std::string expected = "AB";

    ASSERT_EQ(result, expected);
}

TEST_F(GreatestCommonDivisorOfStrings, ThirdTest) {
    std::string first = "LEET";
    std::string second = "CODE";

    std::string result = Solution::gcd_of_strings(first, second);
    std::string expected;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
