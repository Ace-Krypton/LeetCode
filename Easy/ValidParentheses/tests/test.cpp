#include "../include/solution.hpp"

class ValidParentheses : public ::testing::Test {
protected:
    ~ValidParentheses() override = default;
};

TEST_F(ValidParentheses, FirstTest) {
    std::string sentence = "()";

    bool result = Solution::is_valid(sentence);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(ValidParentheses, SecondTest) {
    std::string sentence = "()[]{}";

    bool result = Solution::is_valid(sentence);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(ValidParentheses, ThirdTest) {
    std::string sentence = "(]";

    bool result = Solution::is_valid(sentence);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
