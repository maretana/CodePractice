const counter = require('./counter')

test('Challenge default tests', () => {
  var i = 1
  for (var n of counter) {
    if (n > 10) { break }
    expect(n).toEqual(i)
    i++ // Original CodeWars test does this increment on a template string. [Test.assertEquals(n, i, `Must equal: ${i++}`);]
  }
})
