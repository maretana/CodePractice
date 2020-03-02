// Source: https://www.codewars.com/kata/54bb6f887e5a80180900046b/train/cpp
#include "LongestPalindrome.h"
#include <algorithm>

int** allocateArray(int length) {
    int** array = new int* [length];
    for (int i = 0; i < length; i++) {
        array[i] = new int[length];
    }
    return array;
}

void deallocateArray(int** array, int length) {
    for (int i = 0; i < length; i++) {
        delete[] array[i];
    }
    delete[] array;
}

int longest_palindrome(const std::string& s)
{
    const int length = strlen(s.c_str());
    int** results = allocateArray(length);
    int palindromeLength;
    results[0][length - 1] = 0; // default for empty strings

    for (int end = 0; end < length; end++) {
        int start = end;
        do {
            if (start == end) {
                results[start][end] = 1;
            }
            else if (s[start] == s[end] && end - start == 1) {  // 2 length string
                results[start][end] = 2;
            }
            else if (s[start] == s[end] && results[start + 1][end - 1] == end - start - 1) { // if substring is also a palindrome
                results[start][end] = 2 + results[start + 1][end - 1];
            }
            else {
                results[start][end] = std::max(results[start + 1][end], results[start][end - 1]);
            }
            start--;
        } while (start >= 0);
    }

    palindromeLength = results[0][length - 1];
    deallocateArray(results, length);
    return palindromeLength;
}