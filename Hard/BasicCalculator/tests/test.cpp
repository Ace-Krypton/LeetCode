#include "../include/solution.hpp"

class BasicCalculator : public ::testing::Test {
protected:
    ~BasicCalculator() override = default;
};

TEST_F(BasicCalculator, FirstTest) {
    std::string tobe_calculated = "1 + 1";

    int32_t result = Solution::calculate(tobe_calculated);
    int32_t expected = 2;

    ASSERT_EQ(result, expected);
}

TEST_F(BasicCalculator, SecondTest) {
    std::string tobe_calculated = " 2-1 + 2 ";

    int32_t result = Solution::calculate(tobe_calculated);
    int32_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(BasicCalculator, ThirdTest) {
    std::string tobe_calculated = "(1+(4+5+2)-3)+(6+8)";

    int32_t result = Solution::calculate(tobe_calculated);
    int32_t expected = 23;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
