#pragma once
#include <ctype.h>
#include <vector>
#include <string>

class CaesarCipher
{
public:
    static std::vector<std::string> movingShift(const std::string& s, int shift);
    static std::string demovingShift(std::vector<std::string>& s, int shift);
    static char encodeCharacter(char, int);
};

