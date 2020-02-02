// Source: https://www.codewars.com/kata/563b662a59afc2b5120000c6/train/java
package com.github.maretana.codepractice;

public class Arge {
    
  public static int nbYear(int p0, double percent, int aug, int p) {
      int population = p0;
      int years = 0;
      percent = 1 + (percent / 100);
      while (population < p) {
        population *= percent;
        population += aug;
        years++;
      }
      return years;
  }
}