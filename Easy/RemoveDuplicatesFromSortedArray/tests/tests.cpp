#include "../include/solution.hpp"

class MergeSortedArrayTest : public ::testing::Test {
protected:
    ~MergeSortedArrayTest() override = default;
};

TEST_F(MergeSortedArrayTest, FirstTest) {
    std::vector<int32_t > elements = {1, 1, 2};

    std::size_t result =
            Solution::remove_duplicates(elements);

    std::size_t expected = 2;
    ASSERT_EQ(result, expected);
}

TEST_F(MergeSortedArrayTest, SecondTest) {
    std::vector<int32_t > elements = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    std::size_t result =
            Solution::remove_duplicates(elements);

    std::size_t expected = 5;
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
