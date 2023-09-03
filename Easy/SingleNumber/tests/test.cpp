#include "../include/solution.hpp"

class SingleNumber : public ::testing::Test {
protected:
    ~SingleNumber() override = default;
};

TEST_F(SingleNumber, FirstTest) {
    std::vector<int32_t> first = {2, 2, 1};

    std::size_t result = Solution::single_number(first);

    std::size_t expected = 1;
    ASSERT_EQ(result, expected);
}

TEST_F(SingleNumber, SecondTest) {
    std::vector<int32_t>  second = {4, 1, 2, 1, 2};

    std::size_t result = Solution::single_number(second);

    std::size_t expected = 4;
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
