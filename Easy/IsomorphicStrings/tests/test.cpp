#include "../include/solution.hpp"

class IsomorphicStrings : public ::testing::Test {
protected:
    ~IsomorphicStrings() override = default;
};

TEST_F(IsomorphicStrings, FirstTest) {
    std::string s = "egg";
    std::string t = "add";

    bool result = Solution::is_isomorphic(s, t);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(IsomorphicStrings, SecondTest) {
    std::string s = "foo";
    std::string t = "bar";

    bool result = Solution::is_isomorphic(s, t);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

TEST_F(IsomorphicStrings, ThirdTest) {
    std::string s = "paper";
    std::string t = "title";

    bool result = Solution::is_isomorphic(s, t);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
