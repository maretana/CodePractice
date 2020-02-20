const splitInParts = require('./splitInParts')

test('Challenge default tests', function () {
  expect(splitInParts('supercalifragilisticexpialidocious', 3)).toBe('sup erc ali fra gil ist ice xpi ali doc iou s')
  expect(splitInParts('HelloKata', 1)).toBe('H e l l o K a t a')
  expect(splitInParts('HelloKata', 9)).toBe('HelloKata')
})
