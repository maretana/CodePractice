#include "gtest/gtest.h"
#include "Fracts.h"

TEST(FractsTests, ChallengeTests) {
    std::vector<std::vector<unsigned long long>> r1 = { {1, 2}, {1, 3}, {1, 4} };
    std::string ans1 = Fracts::convertFrac(r1);
    std::string sol1 = "(6,12)(4,12)(3,12)";
    EXPECT_EQ(ans1, sol1);
}
