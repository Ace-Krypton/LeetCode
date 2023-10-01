#include "../include/solution.hpp"

class SimplifyPath : public ::testing::Test {
protected:
    ~SimplifyPath() override = default;
};

TEST_F(SimplifyPath, FirstTest) {
    std::string path = "/home/";

    std::string result = Solution::simplify_path(path);

    std::string expected = "/home";
    ASSERT_EQ(result, expected);
}

TEST_F(SimplifyPath, SecondTest) {
    std::string path = "/../";

    std::string result = Solution::simplify_path(path);

    std::string expected = "/";
    ASSERT_EQ(result, expected);
}

TEST_F(SimplifyPath, ThirdTest) {
    std::string path = "/home//foo/";

    std::string result = Solution::simplify_path(path);

    std::string expected = "/home/foo";
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
