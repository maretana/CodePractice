#include <string>
#include <vector>
#include "gtest/gtest.h"
#include "CaesarCipher.h"

#define TEST_SUITE CaesarCipherTests

void movingAndDemovingShiftTest(const std::string &s, int shift) {
    std::vector<std::string> r = CaesarCipher::movingShift(s, shift);
    EXPECT_EQ(CaesarCipher::demovingShift(r, shift), s);
}

TEST(TEST_SUITE, ChallengeTests) {
    std::string  u = "I should have known that you would have a perfect answer for me!!!";
    std::vector<std::string> sol = { "J vltasl rlhr ", "zdfog odxr ypw", " atasl rlhr p ", "gwkzzyq zntyhv", " lvz wp!!!" };

    EXPECT_EQ(CaesarCipher::movingShift(u, 1), sol);
    EXPECT_EQ(CaesarCipher::demovingShift(sol, 1), u);
    movingAndDemovingShiftTest(u, 1);
    u = "O CAPTAIN! my Captain! our fearful trip is done;";
    movingAndDemovingShiftTest(u, 1);
}
