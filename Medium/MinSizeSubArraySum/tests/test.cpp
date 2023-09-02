#include "../include/solution.hpp"

class MinSizeSubArraySum : public ::testing::Test {
protected:
    ~MinSizeSubArraySum() override = default;
};

TEST_F(MinSizeSubArraySum, FirstTest) {
    std::vector<int32_t> elements = {2, 3, 1, 2, 4, 3};
    int32_t target = 7;

    int32_t result = Solution::min_sub_array_len(target, elements);

    int32_t expected = 2;
    ASSERT_EQ(result, expected);
}

TEST_F(MinSizeSubArraySum, SecondTest) {
    std::vector<int32_t> elements = {1, 4, 4};
    int32_t target = 4;

    int32_t result = Solution::min_sub_array_len(target, elements);

    int32_t expected = 1;
    ASSERT_EQ(result, expected);
}

TEST_F(MinSizeSubArraySum, ThirdTest) {
    std::vector<int32_t> elements = {1, 1, 1, 1, 1, 1, 1, 1};
    int32_t target = 11;

    int32_t result = Solution::min_sub_array_len(target, elements);

    int32_t expected = 0;
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
