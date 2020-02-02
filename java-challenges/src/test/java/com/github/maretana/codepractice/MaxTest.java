// Source: https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c/train/java
package com.github.maretana.codepractice;

import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class MaxTest {
  @Test
  public void testEmptyArray() throws Exception {
    assertEquals("Empty arrays should have a max of 0", 0, Max.sequence(new int[]{}));
  }
  @Test
  public void testExampleArray() throws Exception {
    assertEquals("Example array should have a max of 6", 6, Max.sequence(new int[]{-2, 1, -3, 4, -1, 2, 1, -5, 4}));
  }
}