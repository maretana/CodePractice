// Source: https://www.codewars.com/kata/5552101f47fc5178b1000050/train/java
package com.github.maretana.codepractice;

import static org.junit.Assert.*;
import org.junit.Test;


public class DigPowTest {

	@Test
	public void Test1() {
		assertEquals(1, DigPow.digPow(89, 1));
	}
	@Test
	public void Test2() {
		assertEquals(-1, DigPow.digPow(92, 1));
	}
	@Test
	public void Test3() {
		assertEquals(51, DigPow.digPow(46288, 3));
	}
}