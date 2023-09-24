#include "../include/solution.hpp"

class CanPlaceFlowers : public ::testing::Test {
protected:
    ~CanPlaceFlowers() override = default;
};

TEST_F(CanPlaceFlowers, FirstTest) {
    std::vector<int32_t> flowerbed = {1, 0, 0, 0, 1};
    int32_t number = 1;

    bool result = Solution::can_place_flowers(flowerbed, number);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(CanPlaceFlowers, SecondTest) {
    std::vector<int32_t> flowerbed = {1, 0, 0, 0, 1};
    int32_t number = 2;

    bool result = Solution::can_place_flowers(flowerbed, number);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
