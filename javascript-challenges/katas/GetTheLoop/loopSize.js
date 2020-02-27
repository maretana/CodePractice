// Source: https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/train/javascript

/**
 * Determines the length of the loop in a given linked list that will always have a tail and a loop.
 * @param {Object} node
 * @returns {Number} the size of the loop in nodes count.
 */
function loop_size (node) { // eslint-disable-line camelcase
  const nodesContainer = []
  let loopNode = node
  while (loopNode && !nodesContainer.includes(loopNode)) {
    nodesContainer.push(loopNode)
    loopNode = loopNode.getNext()
  }

  return loopNode
    ? nodesContainer.length - nodesContainer.indexOf(loopNode)
    : 0
}

module.exports = loop_size // eslint-disable-line camelcase
