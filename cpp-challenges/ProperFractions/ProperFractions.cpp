// Source: https://www.codewars.com/kata/55b7bb74a0256d4467000070/train/cpp/
#include "ProperFractions.h"
#include <cmath>

// To mark parameters whose values are passed by reference and modified.
#define OUT

/**
 * Applies Euler's Totient function. Also updates `n` value to reduce it by the number of times it can be divided by p.
 **/
long calculateTotiens(long totientsCount, OUT long &n, long p) {
	totientsCount = (totientsCount / p) * (p - 1);
	while (n % p == 0) n /= p;
	return totientsCount;
}

long properFractions(long n)
{
	if (n == 1) return 0;
	long totientsCount = n;

	// This is checked so that we can skip them in the loop below
	if (n % 2 == 0) totientsCount = calculateTotiens(totientsCount, n, 2);
	if (n % 3 == 0) totientsCount = calculateTotiens(totientsCount, n, 3);

	// All composite numbers have a prime factor that is less than or equal to the sqrt
	long limit = sqrtl(n);

	/**
	 * Using Euler's Totient function (phi) we need to find all prime numbers that divide n;
	 * All prime numbers, except for 2 and 3, can be written as 6n - 1 and 6n + 1 for any non negative integer n.
	 * We start at 5 since 5 = 6n - 1 for n = 1.
	 * In each loop, we check for both `i` and `i + 2` ([6n - 1] and [6n + 1])
	 **/
	for (long i = 5; i <= limit; i += 6) {
		if (n % i == 0) {
			totientsCount = calculateTotiens(totientsCount, n, i);
			limit = sqrtl(n);
		}
		if (n % (i + 2) == 0) {
			totientsCount = calculateTotiens(totientsCount, n, i + 2);
			limit = sqrtl(n);
		}
	}

	// Accounts for when n is a prime number.
	if (n > 1) totientsCount = (totientsCount / n) * (n - 1);

	return totientsCount;
}
