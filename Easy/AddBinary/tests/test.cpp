#include "../include/solution.hpp"

class AddBinary : public ::testing::Test {
protected:
    ~AddBinary() override = default;
};

TEST_F(AddBinary, FirstTest) {
    std::string first = "11";
    std::string second = "1";

    std::string result =
            Solution::add_binary(first, second);
    std::string expected = "100";

    ASSERT_EQ(result, expected);
}

TEST_F(AddBinary, SecondTest) {
    std::string first = "1010";
    std::string second = "1011";

    std::string result =
            Solution::add_binary(first, second);
    std::string expected = "10101";

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
