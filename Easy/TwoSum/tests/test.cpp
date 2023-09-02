#include "../include/solution.hpp"

class TwoSum : public ::testing::Test {
protected:
    ~TwoSum() override = default;
};

TEST_F(TwoSum, FirstTest) {
    std::vector<int32_t> elements = {2, 7, 11, 15};
    int32_t target = 9;

    std::vector<int32_t> result = Solution::two_sum(elements, target);

    std::vector<int32_t> expected = {0, 1};
    ASSERT_EQ(result, expected);
}

TEST_F(TwoSum, SecondTest) {
    std::vector<int32_t> elements = {3, 2, 4};
    int32_t target = 6;

    std::vector<int32_t> result = Solution::two_sum(elements, target);

    std::vector<int32_t> expected = {1, 2};
    ASSERT_EQ(result, expected);
}

TEST_F(TwoSum, ThirdTest) {
    std::vector<int32_t> elements = {3, 3};
    int32_t target = 6;

    std::vector<int32_t> result = Solution::two_sum(elements, target);

    std::vector<int32_t> expected = {0, 1};
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
