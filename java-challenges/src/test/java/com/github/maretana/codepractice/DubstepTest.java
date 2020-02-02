// Source: https://www.codewars.com/kata/551dc350bf4e526099000ae5/train/java
package com.github.maretana.codepractice;

import org.junit.Test;
import static org.junit.Assert.assertEquals;


public class DubstepTest {
    @Test
    public void Test1() {
      assertEquals("ABC", Dubstep.SongDecoder("WUBWUBABCWUB"));
    }
    @Test
    public void Test2()
    {
       assertEquals("R L", Dubstep.SongDecoder("RWUBWUBWUBLWUB"));
    }
}