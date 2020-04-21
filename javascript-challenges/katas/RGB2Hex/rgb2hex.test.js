const rgb = require('./rgb2hex')

test('Challenge default tests', function () {
  expect(rgb(0, 0, 0)).toEqual('000000')
  expect(rgb(0, 0, -20)).toEqual('000000')
  expect(rgb(300, 255, 255)).toEqual('FFFFFF')
  expect(rgb(173, 255, 47)).toEqual('ADFF2F')
  expect(rgb(148, 0, 211)).toEqual('9400D3')
})
