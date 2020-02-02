// Source: https://www.codewars.com/kata/5552101f47fc5178b1000050/train/java
package com.github.maretana.codepractice;

public class DigPow {
	
  // I wnated to try a pure mathemathical approach rather than using string conversions.
  public static long digPow(int n, int p) {
    int digits = (int) Math.log10((double) n); // log 10 = 1; log 100 = 2; log 1000 = 3; log 500 = 2.6989...;
    long divisor = pow(10, digits);
    long restSum = 0;
    long powSum = 0;
    while (divisor > 0) {
      restSum *= 10;
      long digit = (long)(n / divisor) - restSum;
      restSum += digit;
      powSum += pow(digit, p++);
      divisor /= 10;
    }

    return powSum % n == 0 ? powSum / n : -1;
  }
  
  // Taken from https://codingforspeed.com/using-faster-integer-power-in-java/
  public static long pow(long a, long b) {
    long re = 1;
    while (b > 0) {
      if ((b & 1) == 1) {
        re *= a;        
      }
      b >>= 1;
      a *= a; 
    }
    return re;
  }
	
}