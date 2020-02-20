// Source: https://www.codewars.com/kata/55c45be3b2079eccff00010f/train/javascript

function order (words) {
  const wordsArray = words.split(' ')
  wordsArray.sort((word1, word2) => {
    return getIndex(word1) - getIndex(word2)
  })
  return wordsArray.join(' ')
}

function getIndex (word) {
  return parseInt(word.match(/\d/)[0])
}

module.exports = order
