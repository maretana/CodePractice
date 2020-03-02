// Source: https://www.codewars.com/kata/56747fd5cb988479af000028/train/cpp
#include "GetMiddle.h"

std::string get_middle(std::string input)
{
    if (input.size() == 0) {
        return input;
    }
    int index = input.size() / 2;
    if (input.size() % 2 == 0) {
        return input.substr(index - 1, 2);
    }
    else {
        return input.substr(index, 1);
    }
}
