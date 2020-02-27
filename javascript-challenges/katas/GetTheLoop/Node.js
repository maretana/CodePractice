function Node () {
  this.next = undefined
}

Node.prototype = {
  getNext: function getNext () {
    return this.next
  },
  setNext: function setNext (nextNode) {
    this.next = nextNode
  }
}

module.exports = Node
