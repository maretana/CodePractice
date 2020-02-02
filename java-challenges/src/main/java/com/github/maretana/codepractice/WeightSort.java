// Source: https://www.codewars.com/kata/55c6126177c9441a570000cc/train/java
package com.github.maretana.codepractice;

import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class WeightPair {
  public String weightString;
  public long weightValue;
  private long calculateWeightValue(String weight) {
    long value = 0;
    long number = Long.parseLong(weight);
    while (number != 0) {
      value += number % 10;
      number /= 10;
    }
    return value;
  }

  public WeightPair(String weightString) {
    this.weightString = weightString;
    this.weightValue = this.calculateWeightValue(weightString);
  }
}

public class WeightSort {

  private static final Pattern regex = Pattern.compile("\\d+");
	
	public static String orderWeight(String strng) {
    Matcher matches = regex.matcher(strng);
    ArrayList<WeightPair> weights = new ArrayList<WeightPair>();

    while(matches.find()) {
      String weight = strng.substring(matches.start(), matches.end());
      weights.add(new WeightPair(weight));
    }

    weights.sort((weight1, weight2) -> {
      if (weight1.weightValue != weight2.weightValue) {
        return weight1.weightValue > weight2.weightValue ? 1 : -1;
      } else {
        return weight1.weightString.compareTo(weight2.weightString);
      } 
    });

    StringBuilder sortedWeights = new StringBuilder();
    for (WeightPair weight : weights) {
      sortedWeights.append(weight.weightString + " ");
    }

    return  sortedWeights.toString().trim();
	}
}