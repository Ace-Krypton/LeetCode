#include "../include/solution.hpp"

class MergeSortedArrayTest : public ::testing::Test {
protected:
    ~MergeSortedArrayTest() override = default;
};

TEST_F(MergeSortedArrayTest, BasicTest) {
    std::vector<int32_t > first = {1, 2, 3, 0, 0, 0};
    std::vector<int32_t> second = {2, 5, 6};

    Solution::merge(first, 3, second, 3);

    std::vector<int32_t> expected = {1, 2, 2, 3, 5, 6};
    ASSERT_EQ(first, expected);
}

TEST_F(MergeSortedArrayTest, EmptySecondArray) {
    std::vector<int32_t> first = {1, 2, 3};
    std::vector<int32_t> second;

    Solution::merge(first, 3, second, 0);

    std::vector<int32_t> expected = {1, 2, 3};
    ASSERT_EQ(first, expected);
}

TEST_F(MergeSortedArrayTest, EmptyFirstArray) {
    std::vector<int32_t> first;
    std::vector<int32_t> second = {2, 5, 6};

    Solution::merge(first, 0, second, 3);

    std::vector<int32_t> expected = {2, 5, 6};
    ASSERT_EQ(first, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
