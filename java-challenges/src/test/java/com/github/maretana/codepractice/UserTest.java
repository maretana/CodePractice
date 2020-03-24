// Source: https://www.codewars.com/kata/51fda2d95d6efda45e00004e/train/java
package com.github.maretana.codepractice;

import static org.junit.Assert.assertEquals;

import org.junit.Test;

public class UserTest {
  @Test
  public void testUserLevelsUpCorrectly () {
    User user = new User();
    assertEquals(-8, user.rank);
    assertEquals(0, user.progress);
    user.incProgress(-7);
    assertEquals(10, user.progress);
    user.incProgress(-5);
    assertEquals(0, user.progress);
    assertEquals(-7, user.rank);
  }

  @Test
  public void testMinusOneProgress () {
    User user = new User();
    user.rank = -1;
    user.incProgress(1);
    assertEquals(-1, user.rank);
    assertEquals(10, user.progress);
  }

  @Test
  public void testLowerRank () {
    User user = new User();
    user.rank = 1;
    user.progress = 20;
    user.incProgress(-1);
    assertEquals(21, user.progress);
  }
}
