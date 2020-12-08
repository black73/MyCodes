v <- c(1:12)

B <- matrix(v, nrow = 4, ncol = 3)
rownames(B) <- c('a', 'b', 'c', 'd')
colnames(B) <- c('x', 'y', 'z')
print(B)

z1 <- c(5, 9, 0)
D <- rbind(A, z1)
rownames(D) <- c('a', 'b', 'c', 'd')

C = B + D
print(C)