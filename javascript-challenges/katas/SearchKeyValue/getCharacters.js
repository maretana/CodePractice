// Source: https://www.codewars.com/kata/55d5da66a0e378b8bc0000c6/train/javascript

function getCharacters (objs, key, val) {
  var foundCharacters = []
  for (var i = 0; i < objs.characters.length; i++) {
    var obj = objs.characters[i]
    if (obj[key] && obj[key].toLowerCase() === val.toLowerCase()) {
      foundCharacters.push(obj)
    }
  }
  return foundCharacters
}

module.exports = getCharacters
