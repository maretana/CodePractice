// Source: https://www.codewars.com/kata/54d7660d2daf68c619000d95/train/cpp
#include "Fracts.h"

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    while (a != 0) {
        unsigned long long b0 = b;
        b = a;
        a = b0 % a;
    }
    return b;
}

unsigned long long lcm(unsigned long long a, unsigned long long b)
{
    return a / gcd(a, b) * b;
}

std::string Fracts::convertFrac(std::vector<std::vector<unsigned long long>>& lst) {
    std::string result = "";
    unsigned long long divider = 1;
    for (int i = 0; i < lst.size(); i++) {
        divider = lcm(divider, lst[i][1]);
    }
    for (int i = 0; i < lst.size(); i++) {
        result += "(" + std::to_string(divider / lst[i][1] * lst[i][0]) + "," + std::to_string(divider) + ")";
    }
    return result;
}