#include "../include/solution.hpp"

class GenerateParentheses : public ::testing::Test {
protected:
    ~GenerateParentheses() override = default;
};

TEST_F(GenerateParentheses, FirstTest) {
    int32_t number = 1;

    std::vector<std::string> result =
            Solution::generate_parenthesis(number);
    std::vector<std::string> expected = {"()"};

    ASSERT_EQ(result, expected);
}

TEST_F(GenerateParentheses, SecondTest) {
    int32_t number = 3;

    std::vector<std::string> result =
            Solution::generate_parenthesis(number);
    std::vector<std::string> expected = {"((()))","(()())","(())()","()(())","()()()"};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
