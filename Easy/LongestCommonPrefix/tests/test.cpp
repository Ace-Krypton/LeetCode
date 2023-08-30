#include "../include/solution.hpp"

class LongestCommonPrefix : public ::testing::Test {
protected:
    ~LongestCommonPrefix() override = default;
};

TEST_F(LongestCommonPrefix, FirstTest) {
    std::vector<std::string> words = {"flower", "flow", "flight"};
    std::string result = Solution::longest_common_prefix(words);
    std::string expected = "fl";

    ASSERT_EQ(result, expected);
}

TEST_F(LongestCommonPrefix, SecondTest) {
    std::vector<std::string> words = {"dog","racecar","car"};
    std::string result = Solution::longest_common_prefix(words);
    std::string expected;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
