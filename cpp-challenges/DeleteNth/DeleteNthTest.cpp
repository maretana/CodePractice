#include "gtest/gtest.h"
extern "C" {
    #include "DeleteNth.h"
}

# define TEST_SUITE DeleteNthTests

void assertExpectedArray(size_t e, int* expected, size_t s, int* submitted) {
    EXPECT_EQ(s, e);
    for (size_t i = 0; i < e; i++) {
        EXPECT_EQ(submitted[i], expected[i]);
    }
}

TEST(TEST_SUITE, ChallengeTestsSize4) {
#define SZIN 4
    int order[SZIN] = { 20, 37, 20, 21 };
    int max_e = 1;
#define SZEXP 3
    int expected[SZEXP] = { 20, 37, 21 };
    size_t szout = NULL;
    int* submitted = delete_nth(SZIN, order, max_e, &szout);
    assertExpectedArray(SZEXP, expected, szout, submitted);
    free(submitted); submitted = NULL;
}

TEST(TEST_SUITE, ChallengeTestsSize9) {
#define SZIN 9
    int order[SZIN] = { 1, 1, 3, 3, 7, 2, 2, 2, 2 };
    int max_e = 3;
#define SZEXP 8
    int expected[SZEXP] = { 1, 1, 3, 3, 7, 2, 2, 2 };
    size_t szout = NULL;
    int* submitted = delete_nth(SZIN, order, max_e, &szout);
    assertExpectedArray(SZEXP, expected, szout, submitted);
    free(submitted); submitted = NULL;
}
