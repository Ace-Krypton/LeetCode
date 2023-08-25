#include "../include/solution.hpp"

class BestTimeToBuyAndSellStockII : public ::testing::Test {
protected:
    ~BestTimeToBuyAndSellStockII() override = default;
};

TEST_F(BestTimeToBuyAndSellStockII, FirstTest) {
    std::vector<int32_t> elements = {7, 1, 5, 3, 6, 4};

    int32_t result = Solution::max_profit(elements);
    int32_t expected = 7;

    ASSERT_EQ(result, expected);
}

TEST_F(BestTimeToBuyAndSellStockII, SecondTest) {
    std::vector<int32_t> elements = {1, 2, 3, 4, 5};

    int32_t result = Solution::max_profit(elements);
    int32_t expected = 4;

    ASSERT_EQ(result, expected);
}

TEST_F(BestTimeToBuyAndSellStockII, ThirdTest) {
    std::vector<int32_t> elements = {7, 6, 4, 3, 1};

    int32_t result = Solution::max_profit(elements);
    int32_t expected = 0;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
