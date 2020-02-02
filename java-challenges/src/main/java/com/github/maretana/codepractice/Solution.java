// Source: https://www.codewars.com/kata/517abf86da9663f1d2000003/train/java
package com.github.maretana.codepractice;

import java.lang.StringBuilder;
class Solution{

  static String toCamelCase(String s){
    StringBuilder camelCaseBuilder = new StringBuilder();
    for (int i = s.length() - 1; i >= 0; i--) {
      char c = s.charAt(i);
      if (c != '_' && c != '-') {
        if (i > 0 && (s.charAt(i-1) == '_' || s.charAt(i-1) == '-')) {
          c = Character.toUpperCase(c);
        }
        camelCaseBuilder.insert(0, c);
      }
    }
    return camelCaseBuilder.toString();
  }
}