// Source: https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/train/javascript

/**
 * Determines the length of the loop in a given linked list that will always have a tail and a loop.
 * Implementation of Floyd's Tortoise and Hare
 * @param {Object} node
 * @returns {Number} the size of the loop in nodes count.
 */
function loop_size (node) { // eslint-disable-line camelcase
  if (!node) return 0

  let hare = node
  let tortoise = node
  let loopCount = 0

  do {
    tortoise = tortoise.getNext()
    hare = hare.getNext() && hare.getNext().getNext()
  } while (hare && hare !== tortoise)

  if (hare) {
    hare = hare.getNext()
    for (loopCount = 1; hare !== tortoise; loopCount++) {
      hare = hare.getNext()
    }
  }

  return loopCount
}

module.exports = loop_size // eslint-disable-line camelcase
