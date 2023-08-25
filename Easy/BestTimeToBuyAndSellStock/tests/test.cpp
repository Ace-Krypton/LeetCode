#include "../include/solution.hpp"

class BestTimeToBuyAndSellStock : public ::testing::Test {
protected:
    ~BestTimeToBuyAndSellStock() override = default;
};

TEST_F(BestTimeToBuyAndSellStock, FirstTest) {
    std::vector<int32_t> elements = {7, 1, 5, 3, 6, 4};

    int32_t result = Solution::max_profit(elements);
    int32_t expected = 5;

    ASSERT_EQ(result, expected);
}

TEST_F(BestTimeToBuyAndSellStock, SecondTest) {
    std::vector<int32_t> elements = {7, 6, 4, 3, 1};

    int32_t result = Solution::max_profit(elements);
    int32_t expected = 0;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
