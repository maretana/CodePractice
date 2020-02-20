const calculateTotal = require('./calculateTotal')

test('Challenge default tests', () => {
  expect(calculateTotal([1, 2, 2], [1, 0, 0])).toBe(true)
  expect(calculateTotal([6, 45, 1], [1, 55, 0])).toBe(false)
  expect(calculateTotal([57, 2, 1], [])).toBe(true)
  expect(calculateTotal([], [3, 4, 3])).toBe(false)
})
