// Source: https://www.codewars.com/kata/514b92a657cdc65150000006/train/javascript

function solution (number) {
  return sumOfTwoMultiples(3, 5, number)
}

/**
 * Sums all the multiples of `a` and `b` below the specified limit. Multiples
 * of both numbers will only be counted once.
 * @param {Number} a A multiple we want to sum
 * @param {Number} b A multiple we want to sum
 * @param {Number} limit The limit of this sum
 * @returns {Number} The sum of all the multiples of a or b below the limit passed in.
 */
function sumOfTwoMultiples (a, b, limit) {
  const sumA = sumOfMultiple(a, limit)
  const sumB = sumOfMultiple(b, limit)
  const sumAB = sumOfMultiple(a * b, limit)
  return sumA + sumB - sumAB
}

function sumOfMultiple (multiple, limit) {
  const multipleCount = Math.floor((limit - 1) / multiple)
  return multiple * 0.5 * multipleCount * (multipleCount + 1)
}

module.exports = solution
