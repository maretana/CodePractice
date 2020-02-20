const computerToPhone = require('./computerToPhone')

test('Challenge default tests', () => {
  expect(computerToPhone('0789456123')).toBe('0123456789')
  expect(computerToPhone('000')).toBe('000')
  expect(computerToPhone('94561')).toBe('34567')
  expect(computerToPhone('')).toBe('')
})
