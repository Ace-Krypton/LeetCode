#include "../include/solution.hpp"

class AsteroidCollision : public ::testing::Test {
protected:
    ~AsteroidCollision() override = default;
};

TEST_F(AsteroidCollision, FirstTest) {
    std::vector<int32_t> asteroids = {5, 10, -5};

    std::vector<int32_t> result =
            Solution::asteroid_collision(asteroids);

    std::vector<int32_t> expected = {5, 10};
    ASSERT_EQ(result, expected);
}

TEST_F(AsteroidCollision, SecondTest) {
    std::vector<int32_t> asteroids = {8, -8};

    std::vector<int32_t> result =
            Solution::asteroid_collision(asteroids);

    std::vector<int32_t> expected = { };
    ASSERT_EQ(result, expected);
}

TEST_F(AsteroidCollision, ThirdTest) {
    std::vector<int32_t> asteroids = {10, 2, -5};

    std::vector<int32_t> result =
            Solution::asteroid_collision(asteroids);

    std::vector<int32_t> expected = {10};
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
