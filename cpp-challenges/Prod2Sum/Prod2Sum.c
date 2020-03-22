// Source: https://www.codewars.com/kata/55e86e212fce2aae75000060/train/c
#include "Prod2Sum.h"
#include <stdlib.h>

Pair* newPair(long long first, long long snd) {
    Pair* pair = (Pair*)malloc(sizeof(Pair));
    if (pair == NULL) {
        exit(EXIT_FAILURE);
    }
    pair->first = first < snd ? first : snd;
    pair->snd = first + snd - pair->first;
    return pair;
}

// fill length with the number of pairs in your array of pairs
Pair** prod2Sum(long long a, long long b, long long c, long long d, int* length) {
    Pair** pairArr = (Pair**)malloc(sizeof(Pair*));
    if (pairArr == NULL) {
        exit(EXIT_FAILURE);
    }

    // Pair values can only be a combination of (e1, f2) and (e2, f1) according to the instructions.
    long long e1 = llabs(a * c + b * d);
    long long e2 = llabs(a * d + b * c);
    long long f1 = llabs(a * c - b * d);
    long long f2 = llabs(a * d - b * c);
    pairArr[0] = newPair(e1, f2);
    length[0]++;

    Pair* nextPair = newPair(e2, f1);

    // Check if it's a duplicate first. One of the values may repeat, but not both!
    if (pairArr[0]->first != nextPair->first || pairArr[0]->snd != nextPair->snd) {
        Pair** oldPtr = pairArr;
        pairArr = (Pair**)realloc(pairArr, sizeof(pairArr[0]) * ++length[0]);
        if (pairArr == NULL) {
            free(nextPair);
            free(oldPtr[0]);
            free(oldPtr);
            exit(EXIT_FAILURE);
        }
        else {
            // Pairs must be sorted by the first value of each pair.
            if (nextPair->first < pairArr[0]->first) {
                pairArr[1] = pairArr[0];
                pairArr[0] = nextPair;
            }
            else {
                pairArr[1] = nextPair;
            }
        }
    }

    return pairArr;
}
