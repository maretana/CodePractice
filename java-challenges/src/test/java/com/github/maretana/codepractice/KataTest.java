// Source: https://www.codewars.com/kata/525f47c79f2f25a4db000025/train/java
package com.github.maretana.codepractice;

import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class KataTest {
  @Test
  public void tests() {
    assertEquals(true, Kata.validPhoneNumber("(123) 456-7890"));
    assertEquals(false, Kata.validPhoneNumber("(1111)555 2345"));
    assertEquals(false, Kata.validPhoneNumber("(098) 123 4567"));
  }
}