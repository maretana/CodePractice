const nbMonths = require('./nbMonths')

test('Challenge default tests', function () {
  expect(nbMonths(2000, 8000, 1000, 1.5)).toEqual([6, 766])
  expect(nbMonths(12000, 8000, 1000, 1.5)).toEqual([0, 4000])
})
