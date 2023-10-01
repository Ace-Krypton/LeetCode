#include "../include/solution.hpp"

class Dota2Senate : public ::testing::Test {
protected:
    ~Dota2Senate() override = default;
};

TEST_F(Dota2Senate, FirstTest) {
    std::string senate = "RD";

    std::string result = Solution::predict_party_victory(senate);
    std::string expected = "Radiant";

    ASSERT_EQ(result, expected);
}

TEST_F(Dota2Senate, SecondTest) {
    std::string senate = "RDD";

    std::string result = Solution::predict_party_victory(senate);
    std::string expected = "Dire";

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
