function paginationText (pageNumber, pageSize, totalProducts) {
  const startIndex = Math.min((pageSize * (pageNumber - 1)) + 1, totalProducts)
  const endIndex = Math.min(startIndex + pageSize - 1, totalProducts)
  return `Showing ${startIndex} to ${endIndex} of ${totalProducts} Products.`
}

module.exports = paginationText
