// Source: https://www.codewars.com/kata/525f47c79f2f25a4db000025/train/java
package com.github.maretana.codepractice;

import java.util.regex.Pattern;

public class Kata {
  public static boolean validPhoneNumber(String phoneNumber) {
    String regex = "^\\(\\d{3}\\)\\s\\d{3}-\\d{4}$";
    return Pattern.matches(regex, phoneNumber);
  }
}