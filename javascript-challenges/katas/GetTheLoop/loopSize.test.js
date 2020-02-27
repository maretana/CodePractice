/* eslint-disable camelcase */

const Node = require('./Node')
const loop_size = require('./loopSize')

function buildLoopingList (listSize, loopSize) {
  const firstNode = new Node()
  let currentNode = firstNode
  for (let i = 1; i < listSize; i++) {
    currentNode.setNext(new Node())
    currentNode = currentNode.getNext()
  }

  const lastNode = currentNode
  currentNode = firstNode
  for (let i = listSize; i > loopSize; i--) {
    currentNode = currentNode.getNext()
  }

  lastNode.setNext(currentNode)

  return firstNode
}

describe('Non-looping lists', () => {
  test('should return 0 when no list is provided', () => {
    expect(loop_size()).toBe(0)
  })
  test('should return 0 when a single node is provided', () => {
    expect(loop_size(new Node())).toBe(0)
  })
  test('should return 0 when a non-looping list is provided', () => {
    const firstNode = new Node()
    let currentNode = firstNode
    for (let i = 0; i < 3; i++) {
      currentNode.setNext(new Node())
      currentNode = currentNode.getNext()
    }
    expect(loop_size(firstNode)).toBe(0)
  })
})

describe('Lists with a loop and a tail', () => {
  test('should parse the tail and return 1 for the Selfie loop', () => {
    const node = buildLoopingList(2, 1)
    expect(loop_size(node)).toBe(1)
  })
  test('should return 7 for a list of 8 nodes, 7 of which are in a loop', () => {
    const node = buildLoopingList(8, 7)
    expect(loop_size(node)).toBe(7)
  })
  test('should return 5 for a list of 8 nodes, 5 of which are in a loop', () => {
    const node = buildLoopingList(8, 5)
    expect(loop_size(node)).toBe(5)
  })
  test('Large list', () => {
    const node = buildLoopingList(8362, 7430)
    expect(loop_size(node)).toBe(7430)
  })
})

describe('Fully looped lists', () => {
  test('should return 1 for a self-referencing node', () => {
    const node = new Node()
    node.setNext(node)
    expect(loop_size(node)).toBe(1)
  })
  test('should return 4 for a list of 4 nodes, all of which are in a loop', () => {
    const node = buildLoopingList(4, 4)
    expect(loop_size(node)).toBe(4)
  })
  test('Large list', () => {
    const node = buildLoopingList(33333, 33333)
    expect(loop_size(node)).toBe(33333)
  })
})

/* eslint-enable camelcase */
