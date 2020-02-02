// Source: https://www.codewars.com/kata/55466989aeecab5aac00003e/train/java
package com.github.maretana.codepractice;

import static org.junit.Assert.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.junit.Test;

public class SqInRectTest {

	@Test
	public void test1() {
		List<Integer> res = new ArrayList<Integer>(Arrays.asList(3, 2, 1, 1));
		assertEquals(res, SqInRect.sqInRect(5, 3));
	}
	@Test
	public void test2() {
		assertEquals(null, SqInRect.sqInRect(5, 5));
	}
}
