#include "gtest/gtest.h"
extern "C" {
#include "Prod2Sum.h"
}

#define TEST_SUITE Prod2SumTests

void freePairArray(Pair** pairArr, size_t pairSize) {
    for (size_t i = 0; i < pairSize; i++) {
        free(pairArr[i]);
    }
    free(pairArr);
}
TEST(TEST_SUITE, ChallengeCase1) {
    int pairLength = 0;
    Pair** testPair = prod2Sum(1, 2, 1, 3, &pairLength);
    ASSERT_EQ(pairLength, 2);
    EXPECT_EQ(testPair[0]->first, 1ll);
    EXPECT_EQ(testPair[0]->snd, 7ll);
    EXPECT_EQ(testPair[1]->first, 5ll);
    EXPECT_EQ(testPair[1]->snd, 5ll);
    freePairArray(testPair, pairLength);
}

TEST(TEST_SUITE, ChallengeCase2) {
    int pairLength = 0;
    Pair** testPair = prod2Sum(2, 3, 4, 5, &pairLength);
    ASSERT_EQ(pairLength, 2);
    EXPECT_EQ(testPair[0]->first, 2);
    EXPECT_EQ(testPair[0]->snd, 23);
    EXPECT_EQ(testPair[1]->first, 7);
    EXPECT_EQ(testPair[1]->snd, 22);
    freePairArray(testPair, pairLength);
}

TEST(TEST_SUITE, ChallengeCase3) {
    int pairLength = 0;
    Pair** testPair = prod2Sum(1, 2, 2, 3, &pairLength);
    ASSERT_EQ(pairLength, 2);
    EXPECT_EQ(testPair[0]->first, 1);
    EXPECT_EQ(testPair[0]->snd, 8);
    EXPECT_EQ(testPair[1]->first, 4);
    EXPECT_EQ(testPair[1]->snd, 7);
    freePairArray(testPair, pairLength);
}

TEST(TEST_SUITE, ChallengeCase4) {
    int pairLength = 0;
    Pair** testPair = prod2Sum(1, 1, 3, 5, &pairLength);
    ASSERT_EQ(pairLength, 1);
    EXPECT_EQ(testPair[0]->first, 2);
    EXPECT_EQ(testPair[0]->snd, 8);
    freePairArray(testPair, pairLength);
}

TEST(TEST_SUITE, ChallengeCase5) {
    int pairLength = 0;
    Pair** testPair = prod2Sum(7, 96, -1, 81, &pairLength);
    ASSERT_EQ(pairLength, 2);
    EXPECT_EQ(testPair[0]->first, 471);
    EXPECT_EQ(testPair[0]->snd, 7783);
    EXPECT_EQ(testPair[1]->first, 663);
    EXPECT_EQ(testPair[1]->snd, 7769);
    freePairArray(testPair, pairLength);
}

TEST(TEST_SUITE, ChallengeCase6) {
    int pairLength = 0;
    Pair** testPair = prod2Sum(112, 0, 0, 1, &pairLength);
    EXPECT_EQ(pairLength, 1);
    EXPECT_EQ(testPair[0]->first, 0);
    EXPECT_EQ(testPair[0]->snd, 112);
    freePairArray(testPair, pairLength);
}
