#include "gtest/gtest.h"
#include "ProperFractions.h"

#define TEST_SUITE ProperFractionsTests

TEST(TEST_SUITE, ChallengeDefaultTests) {
    EXPECT_EQ(properFractions(1), 0);
    EXPECT_EQ(properFractions(2), 1);
    EXPECT_EQ(properFractions(5), 4);
    EXPECT_EQ(properFractions(15), 8);
    EXPECT_EQ(properFractions(25), 20);
}

TEST(TEST_SUITE, BigNumbers) {
    EXPECT_EQ(properFractions(14), 6);
    EXPECT_EQ(properFractions(25), 20);
    EXPECT_EQ(properFractions(36), 12);
    EXPECT_EQ(properFractions(43), 42);
    EXPECT_EQ(properFractions(266088996l), 78693120l);
    EXPECT_EQ(properFractions(749260452l), 241696800l);
    EXPECT_EQ(properFractions(LONG_MAX), 2147483646l);
}