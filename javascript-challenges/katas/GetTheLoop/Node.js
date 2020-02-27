function Node () {
  this.next = undefined
}

Node.prototype = {
  getNext: function getNext () {
    return this.next
  },
  setNext: function setNext (newNext) {
    this.next = newNext
  }
}

module.exports = Node
