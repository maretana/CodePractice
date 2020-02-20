const getCharacters = require('./getCharacters')

describe('Challenge default tests', () => {
  const characters = {
    characters:
    [{ name: 'Dipper Pines', age: '12', speciality: 'adventurer' },
      {
        name: 'Mabel Pines',
        age: '12',
        speciality: 'energetic optimist'
      },
      { name: 'Grunkle Stan', age: 'Unknown', speciality: 'shyster' },
      {
        name: 'Soos Ramirez',
        age: '22',
        speciality: ' lovable man-child'
      },
      {
        name: 'Wendy Corduroy',
        age: '15',
        speciality: 'sociable and nonchalant'
      },
      { name: 'Waddles', age: 'Unknown', speciality: 'pig stuff' },
      {
        name: 'Tambry',
        age: '15',
        speciality: 'sociable and nonchalant'
      }]
  }
  test('Function should be able to match passed criteria.', () => {
    expect(getCharacters(characters, 'name', 'Dipper Pines')).toEqual([{ name: 'Dipper Pines', age: '12', speciality: 'adventurer' }])
  })

  test('Match should be case insensitive.', () => {
    expect(getCharacters(characters, 'name', 'waddles')).toEqual([{ name: 'Waddles', age: 'Unknown', speciality: 'pig stuff' }])
  })

  test('Function should match the full passed criteria.', () => {
    expect(getCharacters(characters, 'name', 'Wendy')).not.toEqual([{ name: 'Wendy Corduroy', age: '15', speciality: 'sociable and nonchalant' }])
  })
})
