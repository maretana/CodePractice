#include "gtest/gtest.h"
extern "C" {
    #include "CountBits.h"
}

TEST(CountBitsTests, ChallengeTests) {
    {
        int received = countBits(0);
        int expected = 0;
        EXPECT_EQ(received, expected);
    }

    {
        int received = countBits(4);
        int expected = 1;
        EXPECT_EQ(received, expected);
    }

    {
        int received = countBits(7);
        int expected = 3;
        EXPECT_EQ(received, expected);
    }

    {
        int received = countBits(9);
        int expected = 2;
        EXPECT_EQ(received, expected);
    }

    {
        int received = countBits(10);
        int expected = 2;
        EXPECT_EQ(received, expected);
    }
}
