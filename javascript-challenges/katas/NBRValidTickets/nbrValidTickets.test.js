const nbrValidTickets = require('./nbrValidTickets')

test('Challenge default tests', () => {
  var ex = ['A9JZOD', 'E9FIDH', 'SI2JIS', 'F8JIODJ', 'FDSNJA', 'A9POF?', 'AA9DIJD']
  expect(nbrValidTickets(ex)).toEqual(2)
})
