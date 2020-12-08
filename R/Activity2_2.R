# Naming the rows, columns and matrices
column.names <- c("Col1","Col2","Col3")
row.names <- c("Row1","Row2","Row3")
matrix.names <- c("Matrix1","Matrix2")

# Create two vectors of different lengths for array1
vector1 <- c(seq(5,21,by=2))
vector2 <- c(1,2,3)

# Inputting the vectors, dimensions and names to the array, array1
array1 <- array(c(vector1,vector2),dim = c(3,3,2),dimnames = list(row.names,column.names,matrix.names))
cat ("Array1\n")
print(array1)

# Create two vectors of different lengths for array2
vector3 <- c(11,12,13)
vector4 <- c(1,-10,5,1,3,-2,6,2,9)

# Creating array2
array2 <- array(c(vector3,vector4),dim = c(3,3,2),dimnames = list(row.names,column.names,matrix.names))
cat ("Array2\n")
print(array2)

# create matrices from the first matrix of these arrays
matrix1 <- array1[,,1]
matrix2 <- array2[,,2]

cat ("Matrix1 - 1st Matrix of Array1\n")
print(matrix1)

cat ("Matrix2 - 2nd Matrix of Array2\n")
print(matrix2)

# Subtracting the matrices to get array3
matrix3 <- matrix1 - matrix2
matrix4 <- matrix1 + matrix2

cat ("Matrix3\n")
print(matrix3)

cat ("Matrix4\n")
print(matrix4)

# Creating array3 from matrix3 and matrix4
array3 <- array(c(matrix3,matrix4),dim = c(3,3,2),dimnames = list(row.names,column.names,matrix.names))
cat ("Array3 made up from Matrix 3 and Matrix 4\n")
print(array3)

#-----------------------------------------------Exercise begins:----------------------------------------------------------

cat("***------Answer of Exercise------***\n")

array4 <- array(c(array1[ , , 2], array2[ , , 1]), dim = c(3, 3, 2), dimnames = list(row.names,column.names,matrix.names))
cat("Array4 made from second matrix of array1 and the first matrix of array2.\n")
print(array4)

array5 <- array4 - array3
cat("Array5:\n")
print(array5)