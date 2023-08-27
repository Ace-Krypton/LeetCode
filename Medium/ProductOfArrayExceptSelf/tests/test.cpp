#include "../include/solution.hpp"

class ProductOfArrayExceptSelf : public ::testing::Test {
protected:
    ~ProductOfArrayExceptSelf() override = default;
};

TEST_F(ProductOfArrayExceptSelf, FirstTest) {
    std::vector<int32_t> elements = {1, 2, 3, 4};

    std::vector<int32_t> result = Solution::product_except_self(elements);
    std::vector<int32_t> expected = {24, 12, 8, 6};

    ASSERT_EQ(result, expected);
}

TEST_F(ProductOfArrayExceptSelf, SecondTest) {
    std::vector<int32_t> elements = {-1, 1, 0, -3, 3};

    std::vector<int32_t> result = Solution::product_except_self(elements);
    std::vector<int32_t> expected = {0, 0, 9, 0, 0};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
