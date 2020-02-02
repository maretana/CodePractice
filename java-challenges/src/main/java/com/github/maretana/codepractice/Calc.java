// Source: https://www.codewars.com/kata/52f78966747862fc9a0009ae/train/java
package com.github.maretana.codepractice;

import java.util.ArrayList;

public class Calc {

  public double evaluate(String expr) {
    if (expr.isEmpty()) return 0;
    
    ArrayList<Double> result = new ArrayList<Double>();
    String[] tokens = expr.split(" ");
    
    for (String token : tokens) {
      double left, right;
      int size = result.size();
      switch (token) {
        case "+":
          right = result.remove(--size);
          left = result.remove(--size);
          result.add(left + right);
          break;
        case "-":
          right = result.remove(--size);
          left = result.remove(--size);
          result.add(left - right);
          break;
        case "*":
          right = result.remove(--size);
          left = result.remove(--size);
          result.add(left * right);
          break;
        case "/":
          right = result.remove(--size);
          left = result.remove(--size);
          result.add(left / right);
          break;
        default:
          result.add(Double.parseDouble(token));
      }
    }

    return result.get(0);
  }
}