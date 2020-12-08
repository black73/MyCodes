
M <- array(seq(1, 50, length = 24), dim = c(4, 3, 2), dimnames = list(c('a', 'b', 'c', 'd'), c('x', 'y', 'z'), c('p', 'q')))

print(M)
print(M[ , , 2])
print(M[4, , 2])
print(M[ , 2, 1])