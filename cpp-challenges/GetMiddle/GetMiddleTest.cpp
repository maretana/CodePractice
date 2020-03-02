#include "gtest/gtest.h"
#include "GetMiddle.h"

TEST(GetMiddleTests, SampleTest) {
    EXPECT_EQ(get_middle("test"), "es");
    EXPECT_EQ(get_middle("testing"), "t");
}
