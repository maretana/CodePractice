// Source: https://www.codewars.com/kata/5508249a98b3234f420000fb/train/cpp
#include "CaesarCipher.h"

std::vector<std::string> CaesarCipher::movingShift(const std::string& s, int shift) {
    const int partsLength = 5;
    std::vector<std::string> parts(partsLength);
    int maxChars = s.length() / partsLength;
    int currentPart = -1;

    if (s.length() % partsLength != 0) {
        maxChars++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (i % maxChars == 0) {
            currentPart++;
        }
        parts[currentPart] += encodeCharacter(s[i], shift++);
    }

    return parts;
}

std::string CaesarCipher::demovingShift(std::vector<std::string>& s, int shift) {
    std::string decyphered = "";
    for (auto part : s) {
        for (auto c : part) {
            decyphered += encodeCharacter(c, -shift);
            shift++;
        }
    }
    return decyphered;
}

char CaesarCipher::encodeCharacter(char c, int shift) {
    if (isupper(c) || islower(c)) {
        char origin = isupper(c) ? 'A' : 'a';
        int length = 'Z' - 'A' + 1;
        char encodedChar = c - origin;
        encodedChar = (((encodedChar + shift) % length) + length) % length;
        encodedChar += origin;
        return encodedChar;
    }
    else {
        return c;
    }
}
