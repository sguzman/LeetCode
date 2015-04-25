package com.companyTest;

import static com.company.Solution.strStr;
import static org.junit.Assert.*;

/**
 * Created by Salvador on 4/8/2015.
 */
public class SolutionTest {

    @org.junit.Test
    public void testStrStrMatch1() throws Exception {
        final String haystack = "";
        final String needle = "";

        final int expected = 0;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }
    
    @org.junit.Test
    public void testStrStrMatch2() throws Exception {
        final String haystack = "3f3";
        final String needle = "";

        final int expected = 0;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }
    
    @org.junit.Test
    public void testStrStrMatch3() throws Exception {
        final String haystack = "bananano";
        final String needle = "nano";

        final int expected = 4;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }
    
    @org.junit.Test
    public void testStrStrMatch4() throws Exception {
        final String haystack = "lamejane";
        final String needle = "eja";

        final int expected = 3;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }
    
    @org.junit.Test
    public void testStrStrMatch5() throws Exception {
        final String haystack = "This is a test and you passed";
        final String needle = " you";

        final int expected = 18;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }
    
    @org.junit.Test
    public void testStrStrMatch6() throws Exception {
        final String haystack = "aaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaab";
        final String needle = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";

        final int expected = 81;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }
    
    @org.junit.Test
    public void testStrStrMatch7() throws Exception {
        final String haystack = "abababaabbaabbab";
        final String needle = "aabbaa";

        final int expected = 6;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }

    @org.junit.Test
    public void testStrStrMismatch1() throws Exception {
        final String haystack = "";
        final String needle = "aabbaa";

        final int expected = -1;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }

    @org.junit.Test
    public void testStrStrMismatch2() throws Exception {
        final String haystack = "";
        final String needle = "a";

        final int expected = -1;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }

    @org.junit.Test
    public void testStrStrMismatch3() throws Exception {
        final String haystack = "afdsagavwefewa";
        final String needle = "aabbaa";

        final int expected = -1;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }

    @org.junit.Test
    public void testStrStrMismatch4() throws Exception {
        final String haystack = "aaba";
        final String needle = "aabbaa";

        final int expected = -1;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }

    @org.junit.Test
    public void testStrStrMismatch5() throws Exception {
        final String haystack = "yabbaddadbaa do";
        final String needle = "aabbaa";

        final int expected = -1;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }

    @org.junit.Test
    public void testStrStrMismatch6() throws Exception {
        final String haystack = "nep";
        final String needle = "yep";

        final int expected = -1;
        final int actual = strStr(haystack, needle);

        assertEquals("Expected: " + expected + ", got: " + actual, expected, actual);
    }


}