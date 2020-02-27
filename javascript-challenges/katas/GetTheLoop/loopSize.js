// Source: https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/train/javascript

/**
 * Determines the length of the loop in a given linked list that will always have a tail and a loop.
 * Implementation of Brent’s Cycle Detection Algorithm
 * Hint: look in the commits for other algorithms I implemented before this one.
 * @param {Object} node
 * @returns {Number} the size of the loop in nodes count.
 */
function loop_size (node) { // eslint-disable-line camelcase
  if (!node) return 0

  let power = 1
  let loopCount = 1
  let tortoise = node
  let hare = node.getNext()
  while (hare && tortoise !== hare) {
    if (power === loopCount) {
      tortoise = hare
      power *= 2
      loopCount = 0
    }
    hare = hare.getNext()
    loopCount++
  }

  return hare ? loopCount : 0
}

module.exports = loop_size // eslint-disable-line camelcase
