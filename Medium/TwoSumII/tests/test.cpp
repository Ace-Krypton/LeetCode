#include "../include/solution.hpp"

class TwoSumII : public ::testing::Test {
protected:
    ~TwoSumII() override = default;
};

TEST_F(TwoSumII, FirstTest) {
    std::vector<int32_t> elements = {2, 7, 11, 15};
    int32_t target = 9;

    std::vector<int32_t> result = Solution::two_sum(elements, target);

    std::vector<int32_t> expected = {1, 2};
    ASSERT_EQ(result, expected);
}

TEST_F(TwoSumII, SecondTest) {
    std::vector<int32_t> elements = {2, 3, 4};
    int32_t target = 6;

    std::vector<int32_t> result = Solution::two_sum(elements, target);

    std::vector<int32_t> expected = {1, 3};
    ASSERT_EQ(result, expected);
}

TEST_F(TwoSumII, ThirdTest) {
    std::vector<int32_t> elements = {-1, 0};
    int32_t target = -1;

    std::vector<int32_t> result = Solution::two_sum(elements, target);

    std::vector<int32_t> expected = {1, 2};
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
