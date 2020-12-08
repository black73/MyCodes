x <- c('A+','A','B+','B','C','D','F')

marks <- floor(runif(150,min=0,max=100))

marks

gradeAplus <- subset(marks,marks>=91 & marks < 100)

gradeA <- subset(marks,marks>=81 & marks < 91)

gradeBplus <- subset(marks,marks>=61 & marks < 81)

gradeB <- subset(marks,marks>=51 & marks < 61)

gradeC <- subset(marks,marks>=45 & marks < 51)

gradeD <- subset(marks,marks>=40 & marks < 45)

gradeF <- subset(marks,marks<40)

y <- c(length(gradeAplus),length(gradeA),length(gradeBplus),length(gradeB),length(gradeC),length(gradeD),length(gradeF))

barplot(y,main="Data Structure",xlab="Grades",ylab="Number of Students",names.arg=x)