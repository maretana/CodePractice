// Source: https://www.codewars.com/kata/54d512e62a5e54c96200019e/train/cpp
#include "PrimeDecomp.h"

std::string formatPrimeFactorsString(const std::string& pfString, int prime, int count) {
    if (count == 0) {
        return pfString;
    }
    else if (count == 1) {
        return pfString + "(" + std::to_string(prime) + ")";
    }
    else {
        return pfString + "(" + std::to_string(prime) + "**" + std::to_string(count) + ")";
    }
}

bool isPrime(int n)
{
    // Corner cases  
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip   
    // middle five numbers in below loop  
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

// lst will always be greater than one as per description.
std::string PrimeDecomp::factors(int lst) {
    int number = lst;
    int prime = isPrime(number) ? number : 2;
    int primeCount = 0;
    std::string pfString = "";

    while (number != 1) {
        if (number % prime == 0) {
            primeCount++;
            number /= prime;
        }
        else {
            pfString = formatPrimeFactorsString(pfString, prime, primeCount);
            primeCount = 0;
            prime++;
        }
    }

    if (number == 1) {
        pfString = formatPrimeFactorsString(pfString, prime, primeCount);
    }

    return pfString;
}