// Source: https://www.codewars.com/kata/5650ab06d11d675371000003/train/javascript

var splitInParts = function (s, partLength) {
  return s.replace(new RegExp('(.{' + partLength + '})', 'g'), '$1 ').replace(/\s$/, '')
}

module.exports = splitInParts
