#include <string>
#include <vector>
#include "gtest/gtest.h"
#include "StockList.h"

TEST(StockListTests, ChallengeTests) {
    std::vector<std::string> art = { "ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600" };
    std::vector<std::string> cd = { "A", "B" };
    EXPECT_EQ(StockList::stockSummary(art, cd), "(A : 200) - (B : 1140)");

    art = { "BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600" };
    cd = { "A", "B", "C", "D" };
    EXPECT_EQ(StockList::stockSummary(art, cd), "(A : 0) - (B : 1290) - (C : 515) - (D : 600)");
}
