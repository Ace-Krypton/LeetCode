#include "../include/solution.hpp"

class ValidAnagram : public ::testing::Test {
protected:
    ~ValidAnagram() override = default;
};

TEST_F(ValidAnagram, FirstTest) {
    std::string s = "anagram";
    std::string t = "nagaram";

    bool result = Solution::is_anagram(s, t);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(ValidAnagram, SecondTest) {
    std::string s = "rat";
    std::string t = "car";

    bool result = Solution::is_anagram(s, t);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
