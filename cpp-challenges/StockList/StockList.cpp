// Source: https://www.codewars.com/kata/54dc6f5a224c26032800005c/train/cpp
#include <algorithm>
#include "StockList.h"

std::string StockList::stockSummary(std::vector<std::string>& lstOfArt, std::vector<std::string>& categories) {

    if (lstOfArt.size() == 0 || categories.size() == 0) return "";

    std::string result = "";
    int categoriesCount[26];

    std::fill_n(categoriesCount, 26, 0);

    for (auto art : lstOfArt) {
        int pos = art[0] - 'A';
        int start = art.find_first_of(' ') + 1;
        int quantity = stoi(art.substr(start));
        categoriesCount[pos] += quantity;
    }
    for (auto category : categories) {
        result += "(" + category + " : ";
        result += std::to_string(categoriesCount[category[0] - 'A']);
        result += ") - ";
    }
    result = result.substr(0, result.size() - 3);
    return result;
}
