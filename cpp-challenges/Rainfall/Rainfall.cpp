// Source: https://www.codewars.com/kata/56a32dd6e4f4748cc3000006/train/cpp
#include "Rainfall.h"
#include <string>
#include <sstream>
#include <regex>
#include <vector>

double Rainfall::variance(std::string town, const std::string& strng) {
    auto rainData = getTownData(strng, town);
    if (rainData.size() == 0) {
        return -1;
    }
    else {
        double sum = 0;  // sum of numbers
        double sum2 = 0; // sum of squares
        for (auto value : rainData) {
            sum += value;
            sum2 += value * value;
        }
        return (sum2 - ((sum * sum) / rainData.size())) / rainData.size();
    }
}

double Rainfall::mean(std::string town, const std::string& strng) {
    auto rainData = getTownData(strng, town);
    if (rainData.size() == 0) {
        return -1;
    }
    else {
        double sum = 0;
        for (auto value : rainData) {
            sum += value;
        }
        return sum / rainData.size();
    }
}

std::vector<double> Rainfall::getTownData(const std::string& data, std::string targetTown) {
    std::stringstream ss(data);
    std::string dataLine;
    std::vector<double> townData;

    while (std::getline(ss, dataLine)) {
        std::smatch match;
        std::regex nameRx("^\\w+");
        std::regex_search(dataLine, match, nameRx);
        std::string townName = match[0];
        if (townName == targetTown) {
            std::string searchString = dataLine;
            std::regex dataRx("\\d+\\.?\\d*");
            while (std::regex_search(searchString, match, dataRx)) {
                townData.push_back(std::stod(match[0]));
                searchString = match.suffix().str();
            }
            break;
        }
    }

    return townData;
}