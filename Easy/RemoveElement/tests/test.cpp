#include "../include/solution.hpp"

class RemoveElementTest : public ::testing::Test {
protected:
    ~RemoveElementTest() override = default;
};

TEST_F(RemoveElementTest, FirstTest) {
    std::vector<int32_t > first = {3, 2, 2, 3};
    int32_t value = 3;

    std::size_t result =
            Solution::remove_element(first, value);

    std::size_t expected = 2;
    ASSERT_EQ(result, expected);
}

TEST_F(RemoveElementTest, SecondTest) {
    std::vector<int32_t > second = {0, 1, 2, 2, 3, 0, 4, 2};
    int32_t value = 2;

    std::size_t result =
            Solution::remove_element(second, value);

    std::size_t expected = 5;
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
