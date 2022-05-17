// Source: https://www.codewars.com/kata/526d84b98f428f14a60008da/train/javascript
// Solution based on: http://web.cecs.pdx.edu/~black/AdvancedProgramming/Lectures/Smalltalk%20II/Dijkstra%20on%20Hamming's%20Problem.pdf

function hamming (nth) {
  const hammingArray = [1]
  let x2 = 2; let x3 = 3; let x5 = 5
  let i2 = 0; let i3 = 0; let i5 = 0

  while (hammingArray.length < nth) {
    const h = Math.min(x2, x3, x5)
    hammingArray.push(h)
    if (x2 <= h) x2 = 2 * hammingArray[++i2]
    if (x3 <= h) x3 = 3 * hammingArray[++i3]
    if (x5 <= h) x5 = 5 * hammingArray[++i5]
  }

  return hammingArray.pop()
}

module.exports = hamming
