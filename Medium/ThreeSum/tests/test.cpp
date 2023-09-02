#include "../include/solution.hpp"

class ThreeSum : public ::testing::Test {
protected:
    ~ThreeSum() override = default;
};

TEST_F(ThreeSum, FirstTest) {
    std::vector<int32_t> elements = {-1, 0, 1, 2, -1, -4};

    std::vector <std::vector<int32_t>> result = Solution::three_sum(elements);

    std::vector <std::vector<int32_t>> expected = {{-1, -1, 2}, {-1, 0, 1}};
    ASSERT_EQ(result, expected);
}

TEST_F(ThreeSum, SecondTest) {
    std::vector<int32_t> elements = {0, 1, 1};

    std::vector <std::vector<int32_t>> result = Solution::three_sum(elements);

    std::vector <std::vector<int32_t>> expected = { };
    ASSERT_EQ(result, expected);
}

TEST_F(ThreeSum, ThirdTest) {
    std::vector<int32_t> elements = {0, 0, 0};

    std::vector <std::vector<int32_t>> result = Solution::three_sum(elements);

    std::vector <std::vector<int32_t>> expected = {{0, 0, 0}};
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
