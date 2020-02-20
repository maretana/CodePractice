// Source: https://www.codewars.com/kata/564717d6e94d5d6b21000066/train/javascript

function nbrValidTickets (tickets) {
  var validTickets = tickets.filter(ticket => ticket.length === 6 && new RegExp('^[a-z][0-9][a-z]{4}$', 'i').test(ticket))
  return validTickets.length
}

module.exports = nbrValidTickets
