function getPINs (observed) {
  // Pre-computed replacements for faster execution
  const replacements = {
    1: ['1', '2', '4'],
    2: ['1', '2', '3', '5'],
    3: ['2', '3', '6'],
    4: ['1', '4', '5', '7'],
    5: ['2', '4', '5', '6', '8'],
    6: ['3', '5', '6', '9'],
    7: ['4', '7', '8'],
    8: ['5', '7', '8', '9', '0'],
    9: ['6', '8', '9'],
    0: ['0', '8']
  }

  let pins = ['']

  for (const digit of observed) {
    pins = combineTwo(pins, replacements[digit])
  }
  return pins
}

function combineTwo (arr1, arr2) {
  const combinations = []
  for (const str1 of arr1) {
    for (const str2 of arr2) {
      combinations.push(str1 + str2)
    }
  }
  return combinations
}

module.exports = getPINs
