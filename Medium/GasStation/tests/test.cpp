#include "../include/solution.hpp"

class GasStation : public ::testing::Test {
protected:
    ~GasStation() override = default;
};

TEST_F(GasStation, FirstTest) {
    std::vector<int32_t> gas = {1, 2, 3, 4, 5};
    std::vector<int32_t> cost = {3, 4 ,5, 1, 2};

    int32_t result =
            Solution::can_complete_circuit(gas, cost);
    int32_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(GasStation, SecondTest) {
    std::vector<int32_t> gas = {2, 3, 4};
    std::vector<int32_t> cost = {3, 4, 3};

    int32_t result =
            Solution::can_complete_circuit(gas, cost);
    int32_t expected = -1;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
