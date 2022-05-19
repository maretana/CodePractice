// Source: https://www.codewars.com/kata/521c2db8ddc89b9b7a0000c1/train/javascript

/**
 * Given an n x n array, return the array elements arranged from outermost elements to the middle element, traveling clockwise.
 * @param {number[][]} matrix an n x n array
 * @returns {number[]}
 */
function snail (matrix) {
  const directions = ['right', 'down', 'left', 'up']
  let directionIndex = 0

  const matrixArea = matrix.length * matrix[0].length
  let leftIndex = 0; let rightIndex = matrix.length - 1; let upIndex = 0; let downIndex = matrix.length - 1

  let returnArray = []
  while (returnArray.length < matrixArea) {
    const direction = directions[directionIndex]
    switch (direction) {
      case 'right':
        returnArray = returnArray.concat(matrix[upIndex++].slice(leftIndex, rightIndex + 1))
        break
      case 'down':
        returnArray = returnArray.concat(matrix.slice(upIndex, downIndex).reduce((acc, array) => {
          return [...acc, array[rightIndex]]
        }, []))
        rightIndex--
        break
      case 'left':
        returnArray = returnArray.concat(matrix[downIndex--].slice(leftIndex, rightIndex + 2).reverse())
        break
      case 'up':
        returnArray = returnArray.concat(matrix.slice(upIndex, downIndex + 1).reverse().reduce((acc, array) => {
          return [...acc, array[leftIndex]]
        }, []))
        leftIndex++
    }
    directionIndex = (directionIndex + 1) % directions.length
  }
  return returnArray
}

module.exports = snail
