const hamming = require('./hamming')

describe('HammingNumber', () => {
  test('hamming(1) should be 1', () => {
    expect(hamming(1)).toBe(1)
  })
  test('hamming(2) should be 2', () => {
    expect(hamming(2)).toBe(2)
  })
  test('hamming(3) should be 3', () => {
    expect(hamming(3)).toBe(3)
  })
  test('hamming(4) should be 4', () => {
    expect(hamming(4)).toBe(4)
  })
  test('hamming(5) should be 5', () => {
    expect(hamming(5)).toBe(5)
  })
  test('hamming(6) should be 6', () => {
    expect(hamming(6)).toBe(6)
  })
  test('hamming(7) should be 8', () => {
    expect(hamming(7)).toBe(8)
  })
  test('hamming(8) should be 9', () => {
    expect(hamming(8)).toBe(9)
  })
  test('hamming(9) should be 10', () => {
    expect(hamming(9)).toBe(10)
  })
  test('hamming(10) should be 12', () => {
    expect(hamming(10)).toBe(12)
  })
  test('hamming(11) should be 15', () => {
    expect(hamming(11)).toBe(15)
  })
  test('hamming(12) should be 16', () => {
    expect(hamming(12)).toBe(16)
  })
  test('hamming(13) should be 18', () => {
    expect(hamming(13)).toBe(18)
  })
  test('hamming(14) should be 20', () => {
    expect(hamming(14)).toBe(20)
  })
  test('hamming(15) should be 24', () => {
    expect(hamming(15)).toBe(24)
  })
  test('hamming(16) should be 25', () => {
    expect(hamming(16)).toBe(25)
  })
  test('hamming(17) should be 27', () => {
    expect(hamming(17)).toBe(27)
  })
  test('hamming(18) should be 30', () => {
    expect(hamming(18)).toBe(30)
  })
  test('hamming(19) should be 32', () => {
    expect(hamming(19)).toBe(32)
  })
})
