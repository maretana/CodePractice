function add (n) {
  let acc = n
  function chainAdd (m) {
    acc += m
    return chainAdd
  }

  chainAdd.valueOf = () => acc

  return chainAdd
}

module.exports = add
