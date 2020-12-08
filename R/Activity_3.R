x <- c(1, 4, 5)
y <- c(4, 9, 6)
z <- c(2, 1, 7)

A <- cbind(x, y, z)
print(A)

rownames(A) <- c('a', 'b', 'c')
print(A)