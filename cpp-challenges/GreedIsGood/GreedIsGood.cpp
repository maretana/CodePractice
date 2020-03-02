// Source: https://www.codewars.com/kata/5270d0d18625160ada0000e4/train/cpp
#include "GreedIsGood.h"

/**
 * Assumption: dice will always be five valid six-sided dice values
 * Step 1: count dice values.
 * Step 2: For each of the possible six values, see if we have three of a kind or 1's and 5's and update score accordingly.
**/
int score(const std::vector<int>& dice) {
    int counters[] = { 0, 0, 0, 0, 0, 0 };
    int scoreTotal = 0;
    for (int diceValue : dice) {
        counters[diceValue - 1]++;
    }

    for (int i = 0; i < 6; i++) {
        int valueCounter = counters[i];
        int value = i == 0 ? 10 : i + 1;
        if (valueCounter >= 3) {
            scoreTotal += value * 100;
            valueCounter -= 3;
        }
        if (value == 10 || value == 5) {
            scoreTotal += valueCounter * value * 10;
        }
    }
    return scoreTotal;
}
