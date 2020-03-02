#include "gtest/gtest.h"
#include "LongestPalindrome.h"

TEST(LongestPalindromeTests, ChallengeTests) {
  EXPECT_EQ(longest_palindrome("a"), 1);
  EXPECT_EQ(longest_palindrome("aa"), 2);
  EXPECT_EQ(longest_palindrome("baa"), 2);
  EXPECT_EQ(longest_palindrome("aab"), 2);
  EXPECT_NE(longest_palindrome("zyabyz"), 6);
  EXPECT_EQ(longest_palindrome("baabcd"), 4);
  EXPECT_EQ(longest_palindrome("baablkj12345432133d"), 9);
}
