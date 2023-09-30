#include "../include/solution.hpp"

class DetermineIfTwoStringsAreClose : public ::testing::Test {
protected:
    ~DetermineIfTwoStringsAreClose() override = default;
};

TEST_F(DetermineIfTwoStringsAreClose, FirstTest) {
    std::string first = "abc";
    std::string second = "bca";

    bool result = Solution::close_strings(first, second);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(DetermineIfTwoStringsAreClose, SecondTest) {
    std::string first = "a";
    std::string second = "aa";

    bool result = Solution::close_strings(first, second);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

TEST_F(DetermineIfTwoStringsAreClose, ThirdTest) {
    std::string first = "cabbba";
    std::string second = "abbccc";

    bool result = Solution::close_strings(first, second);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
