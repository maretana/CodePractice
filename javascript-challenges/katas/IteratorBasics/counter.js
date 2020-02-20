// Source: https://www.codewars.com/kata/55aeee88ecebc5c9230000a0/train/javascript

const counter = {
  // Complete this Iterator
  [Symbol.iterator] () {
    let num = 1
    return {
      next () {
        return { done: false, value: num++ }
      }
    }
  }
}

module.exports = counter
