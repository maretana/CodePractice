// Source: https://www.codewars.com/kata/5390bac347d09b7da40006f6/train/java
package com.github.maretana.codepractice;

public class JadenCase {

	public String toJadenCase(String phrase) {
		if (phrase == null || phrase == "") {
			return null;
		}

		String jadenCased = "";
		boolean isFirst = true;
		int index = 0;
		do {
			char c = phrase.charAt(index);
			if (isFirst) {
				isFirst = false;
				c = Character.toUpperCase(c);
			} else if (c == ' ') {
				isFirst = true;
			}
			jadenCased += c;
			index++;
		} while (index < phrase.length());
		return jadenCased;
	}

}