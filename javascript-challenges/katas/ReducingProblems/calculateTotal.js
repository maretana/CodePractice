// Source: https://www.codewars.com/kata/55d2603d506a40e162000056/train/javascript

function calculateTotal (team1, team2) {
  var t1s = team1.reduce((t, c) => t + c, 0)
  var t2s = team2.reduce((t, c) => t + c, 0)
  return t1s > t2s
}

module.exports = calculateTotal
