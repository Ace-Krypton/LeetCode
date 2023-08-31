#include "../include/solution.hpp"

class IsSubsequence : public ::testing::Test {
protected:
    ~IsSubsequence() override = default;
};

TEST_F(IsSubsequence, FirstTest) {
    std::string sequence = "ahbgdc";
    std::string subsequence = "abc";

    bool result = Solution::is_subsequence(subsequence, sequence);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(IsSubsequence, SecondTest) {
    std::string sequence = "ahbgdc";
    std::string subsequence = "axc";

    bool result = Solution::is_subsequence(subsequence, sequence);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
