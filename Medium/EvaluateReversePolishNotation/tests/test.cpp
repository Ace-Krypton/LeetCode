#include "../include/solution.hpp"

class EvaluateReversePolishNotation : public ::testing::Test {
protected:
    ~EvaluateReversePolishNotation() override = default;
};

TEST_F(EvaluateReversePolishNotation, FirstTest) {
    std::vector<std::string> elements = {"2", "1", "+", "3", "*"};

    int32_t result = Solution::eval_RPN(elements);
    int32_t expected = 9;

    ASSERT_EQ(result, expected);
}

TEST_F(EvaluateReversePolishNotation, SecondTest) {
    std::vector<std::string> elements = {"4", "13", "5", "/", "+"};

    int32_t result = Solution::eval_RPN(elements);
    int32_t expected = 6;

    ASSERT_EQ(result, expected);
}

TEST_F(EvaluateReversePolishNotation, ThirdTest) {
    std::vector<std::string> elements =
            {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};

    int32_t result = Solution::eval_RPN(elements);
    int32_t expected = 22;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
