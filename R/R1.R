rollno <- c(1:15)
name <- c("a","b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o")
age <- c(17, 18, 16, 19, 17, 19, 20, 20, 19, 17, 16, 18, 17, 21, 19)
branch <- c("cs", "cs", "cs", "cs", "it", "it", "cs", "it", "cs", "it", "it", "it", "cs", "it", "cs")
CGPA <- c(6, 6.2, 9, 10, 9, 7, 7.5, 8.85, 6.9, 9.1, 8, 8.4, 7.8, 6.9, 8.6)

data <- data.frame(rollno, name, age, branch, CGPA)
print(data)

newdata <- subset(data, CGPA>7.5)
print(newdata)

avg <- mean(newdata[["CGPA"]])
print(avg)

data$name <- NULL
print(data)