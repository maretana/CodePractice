#include "gtest/gtest.h"
#include "Likes.h"

TEST(LikesTests, ChallengeTests) {
    EXPECT_EQ(likes({}), "no one likes this");
    EXPECT_EQ(likes({ "Peter" }), "Peter likes this");
    EXPECT_EQ(likes({ "Jacob", "Alex" }), "Jacob and Alex like this");
    EXPECT_EQ(likes({ "Max", "John", "Mark" }), "Max, John and Mark like this");
    EXPECT_EQ(likes({ "Alex", "Jacob", "Mark", "Max" }), "Alex, Jacob and 2 others like this");
}