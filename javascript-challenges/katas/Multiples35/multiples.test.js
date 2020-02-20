const solution = require('./multiples')

test('Challenge default tests', () => {
  expect(solution(10)).toBe(23)
})

test('Works with positive numbers', () => {
  expect(solution(750)).toBe(130875)
  expect(solution(907)).toBe(192164)
  expect(solution(1000)).toBe(233168)
  expect(solution(3001)).toBe(2101500)
})

it('works with 0', () => {
  expect(solution(0)).toBe(0)
})

it('works with exclusive multiple of 3', () => {
  expect(solution(2481)).toBe(1435508)
})

it('works with exclusive multiple of 5', () => {
  expect(solution(2650)).toBe(1638143)
})
