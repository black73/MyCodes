print(array5)

q <- apply(array5, 1, sum)
print(q)

w <- apply(array5, 2, sum)
print(w)

e <- apply(array5, 1, prod)
print(e)

r <- apply(array5, 2, prod)
print(r)

t <- apply(array5, 2, mean)
print(t)

y <- array5[ , , 1] + array5[ , , 2]
print(y)