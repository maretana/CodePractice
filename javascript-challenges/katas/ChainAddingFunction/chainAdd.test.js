const chainAdd = require('./chainAdd')

// Cannot use .toBe because it uses Object.is comparison so the curried function wouldn't be casted to Number
// Cannot use .toEqual because it would also not cast it to a Number
// Cannot compare received === expected because it would compare for type (without casting first)
// Cannot use == comparisson because of StandardJS linting rules
// Subtraction will force it to cast first and then we can compare number to number

test('Challenge default tests', () => {
  expect(chainAdd(1) - 1 === 0).toBeTruthy()
  expect(chainAdd(1)(2) - 3 === 0).toBeTruthy()
  expect(chainAdd(1)(2)(3) - 6 === 0).toBeTruthy()
})
