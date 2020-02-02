// Source: https://www.codewars.com/kata/55466989aeecab5aac00003e/train/java
package com.github.maretana.codepractice;

import java.util.ArrayList;
import java.util.List;

public class SqInRect {
	
	public static List<Integer> sqInRect(int lng, int wdth) {
		if (lng == wdth) return null;
    List<Integer> squaresSizes = new ArrayList<Integer>();
    while (lng > 0 && wdth > 0) {
      squaresSizes.add(Math.min(lng, wdth));
      if (lng > wdth) {
        lng -= wdth;
      } else {
        wdth -= lng;
      }
    }
    return squaresSizes;
	}
}
