#include "../include/solution.hpp"

class Candy : public ::testing::Test {
protected:
    ~Candy() override = default;
};

TEST_F(Candy, FirstTest) {
    std::vector<int32_t> elements = {1, 0, 2};

    std::size_t result = Solution::candy(elements);
    std::size_t expected = 5;

    ASSERT_EQ(result, expected);
}

TEST_F(Candy, SecondTest) {
    std::vector<int32_t> elements = {1, 2, 2};

    std::size_t result = Solution::candy(elements);
    std::size_t expected = 4;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
