// Source: https://www.codewars.com/kata/526571aae218b8ee490006f4/train/c
#include "CountBits.h"

int countBits(int value) {
    int bitsCount = 0;

    // sizeof gives number of bytes.
    // we convert it to bits and then ignore one bit that is used to identify positive or negative.
    for (int currentBit = ((int)sizeof(value) * 8) - 1; currentBit >= 0; currentBit--)
    {
        int bit = value >> currentBit;

        if (bit & 1) {
            bitsCount++;
        }
    }
    return bitsCount;
}