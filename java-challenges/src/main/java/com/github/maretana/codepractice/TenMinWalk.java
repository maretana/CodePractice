// Source: https://www.codewars.com/kata/54da539698b8a2ad76000228/train/java
package com.github.maretana.codepractice;

public class TenMinWalk {
  public static boolean isValid(char[] walk) {
    if (walk.length == 10) {
      int x = 0;
      int y = 0;
      for(char direction : walk) {
        switch(direction) {
          case 'n': x++;
            break;
          case 'e': y++;
            break;
          case 's': x--;
            break;
          case 'w': y--;
            break;
        }
      }
      return x == 0 && y == 0;
    } else {
      return false;
    }
  }
}