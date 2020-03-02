#include "gtest/gtest.h"
#include "GreedIsGood.h"

#define TEST_SUITE GreedIsGoodTests

TEST(TEST_SUITE, ChallengeTests) {
  EXPECT_EQ(score({ 2, 3, 4, 6, 2 }), 0);
  EXPECT_EQ(score({ 2, 4, 4, 5, 4 }), 450);
  EXPECT_EQ(score({ 5, 1, 3, 4, 1 }), 250);
  EXPECT_EQ(score({ 1, 1, 1, 3, 1 }), 1100);
}

TEST(TEST_SUITE, FiveSixes) {
    EXPECT_EQ(score({ 6, 6, 6, 6, 6 }), 600);
}

TEST(TEST_SUITE, FiveFives) {
    EXPECT_EQ(score({ 5, 5, 5, 5, 5 }), 600);
}

