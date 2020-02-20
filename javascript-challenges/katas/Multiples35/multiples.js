// Source: https://www.codewars.com/kata/514b92a657cdc65150000006/train/javascript

function solution (number) {
  return sumOfMultiples(3, 5, number)
}

/**
 * Sums all the multiples of `a` and `b` below the specified limit. Multiples
 * of both numbers will only be counted once.
 * @param {Number} a A multiple we want to sum
 * @param {Number} b A multiple we want to sum
 * @param {Number} limit The limit of this sum
 * @returns {Number} The sum of all the multiples of a or b below the limit passed in.
 */
function sumOfMultiples (a, b, limit) {
  const multiplesCountForA = Math.floor((limit - 1) / a)
  const multiplesCountForB = Math.floor((limit - 1) / b)
  const multiplesCountForAB = Math.floor((limit - 1) / (a * b))
  const sumA = a * 0.5 * multiplesCountForA * (multiplesCountForA + 1)
  const sumB = b * 0.5 * multiplesCountForB * (multiplesCountForB + 1)
  const sumAB = a * b * 0.5 * multiplesCountForAB * (multiplesCountForAB + 1)
  return sumA + sumB - sumAB
}

module.exports = solution
