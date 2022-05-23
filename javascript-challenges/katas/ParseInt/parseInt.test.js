const parseInt = require('./parseInt')

describe('ParseInt', () => {
  test('one => 1', () => {
    expect(parseInt('one')).toBe(1)
  })
  test('twenty => 20', () => {
    expect(parseInt('twenty')).toBe(20)
  })
  test('two hundred forty-six => 246', () => {
    expect(parseInt('two hundred forty-six')).toBe(246)
  })
  test('seven hundred eighty-three thousand nine hundred and nineteen => 783919', () => {
    expect(parseInt('seven hundred eighty-three thousand nine hundred and nineteen')).toBe(783919)
  })
})
