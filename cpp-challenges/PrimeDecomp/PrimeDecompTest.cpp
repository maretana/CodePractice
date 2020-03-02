#include "gtest/gtest.h"
#include "PrimeDecomp.h"

#define TEST_SUITE PrimeDecompTests

TEST(TEST_SUITE, NumberWithFactors) {
    EXPECT_EQ(PrimeDecomp::factors(7775460), "(2**2)(3**3)(5)(7)(11**2)(17)");
}

TEST(TEST_SUITE, PrimeNumber) {
    EXPECT_EQ(PrimeDecomp::factors(7919), "(7919)");
}
