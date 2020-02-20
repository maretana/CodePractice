// Source: https://www.codewars.com/kata/554a44516729e4d80b000012/train/javascript

function nbMonths (startPriceOld, startPriceNew, savingperMonth, percentLossByMonth) {
  let bank = 0
  let months = 0
  let currentPriceNew = startPriceNew
  let currentPriceOld = startPriceOld
  while (currentPriceNew > currentPriceOld + bank) {
    const devaluation = (0.5 * Math.floor((months + 1) / 2) + percentLossByMonth) / 100
    bank += savingperMonth
    currentPriceOld *= 1 - devaluation
    currentPriceNew *= 1 - devaluation
    months++
  }
  return [months, Math.round(currentPriceOld + bank - currentPriceNew)]
}

module.exports = nbMonths
