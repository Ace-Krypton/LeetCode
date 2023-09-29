#include "../include/solution.hpp"

class MaximumNumberOfVowelsInASubstringOfGivenLength : public ::testing::Test {
protected:
    ~MaximumNumberOfVowelsInASubstringOfGivenLength() override = default;
};

TEST_F(MaximumNumberOfVowelsInASubstringOfGivenLength, FirstTest) {
    std::string element = "abciiidef";

    size_t result = Solution::max_vowels(element, 3);
    size_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(MaximumNumberOfVowelsInASubstringOfGivenLength, SecondTest) {
    std::string element = "aeiou";

    size_t result = Solution::max_vowels(element, 2);
    size_t expected = 2;

    ASSERT_EQ(result, expected);
}

TEST_F(MaximumNumberOfVowelsInASubstringOfGivenLength, ThirdTest) {
    std::string element = "leetcode";

    size_t result = Solution::max_vowels(element, 3);
    size_t expected = 2;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
