// Source: https://www.codewars.com/kata/54da5a58ea159efa38000836/train/javascript

function findOdd (A) {
  const hash = A.reduce((acc, value) => {
    acc[value] = (acc[value] || 0) + 1
    return acc
  }, {})
  for (const valueProp in hash) {
    const value = parseInt(valueProp)
    if (hash[value] % 2 === 1) return value
  }
}

module.exports = findOdd
