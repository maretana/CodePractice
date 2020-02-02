// Source: https://www.codewars.com/kata/551dc350bf4e526099000ae5/train/java
package com.github.maretana.codepractice;

import java.util.Arrays;

public class Dubstep {
  public static String SongDecoder (String song)
  {
    String[] words = song.split("WUB");
    words = Arrays.stream(words).filter(word -> !word.isEmpty()).toArray(String[]::new);
    return String.join(" ", words);
  }
}