// Source: https://www.codewars.com/kata/5572392fee5b0180480001ae/train/javascript

function computerToPhone (numbers) {
  return numbers.split('').map(function (d) { return '0789456123'[d] }).join('')
}

module.exports = computerToPhone
