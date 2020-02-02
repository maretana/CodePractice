// Source: https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c/train/java
package com.github.maretana.codepractice;

public class Max {
  public static int sequence(int[] arr) {
    int sum = 0;
    int maxSum = 0;
    for (int num : arr) {
      sum = Math.max(0, sum + num);
      maxSum = Math.max(sum, maxSum);
    }
    return maxSum;
  }
}