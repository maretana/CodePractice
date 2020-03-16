const paginationText = require('./paginationText')

describe('Challenge default tests', () => {
  test('In a category of 30 products with 10 products per page, on page 1', () => {
    expect(paginationText(1, 10, 30)).toBe('Showing 1 to 10 of 30 Products.')
  })
  test('In a category of 26 products with 10 products per page, on page 3', () => {
    expect(paginationText(3, 10, 26)).toBe('Showing 21 to 26 of 26 Products.')
  })
  test('In a category of 8 products with 10 products per page, on page 1', () => {
    expect(paginationText(1, 10, 8)).toBe('Showing 1 to 8 of 8 Products.')
  })
})

describe('Edge cases', () => {
  test('0 total items', () => {
    expect(paginationText(1, 10, 0)).toBe('Showing 0 to 0 of 0 Products.')
  })
})
