// Source: https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/java
package com.github.maretana.codepractice;

import java.util.HashMap;
import java.util.function.Consumer;

public class DuplicateEncoder {
	static String encode(String word) {
    HashMap<Character, Integer> hash = new HashMap<Character, Integer>();
    StringBuilder result = new StringBuilder();
    word = word.toLowerCase();
    iterateString(word, ch -> {
      int count = hash.getOrDefault(ch, 0);
      hash.put(ch, ++count);
    });
    iterateString(word, ch -> {
      int count = hash.get(ch);
      if (count == 1) result.append('(');
      else result.append(')');
    });
    return result.toString();
  }
  private static void iterateString(String s, Consumer<Character> processCharacter) {
    s.chars()
      .mapToObj(i -> (char) i)
      .forEach(processCharacter);
  }
}
