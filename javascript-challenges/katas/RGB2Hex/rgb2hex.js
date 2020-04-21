function rgb (r, g, b) {
  return formatNumber(r) + formatNumber(g) + formatNumber(b)
}

function formatNumber (n) {
  n = Math.max(n, 0)
  n = Math.min(n, 255)
  return n.toString(16).padStart(2, '0').toUpperCase()
}

module.exports = rgb
