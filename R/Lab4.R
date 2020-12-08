library(rpart)
library(rpart.plot)
#loading the dataset
data <- read.table(url("https://archive.ics.uci.edu/ml/machine-learning-databases/breast-cancer-wisconsin/breast-cancer-wisconsin.data"), na.strings = "?", sep=",")
#the first column is just numbering so we don't need it
data <- data[,-1]
#renaming the columns according to the description
names(data) <- c("ClumpThickness","UniformityCellSize",
                 "UniformityCellShape","MarginalAdhesion",
                 "SingleEpithelialCellSize","BareNuclei",
                 "BlandChromatin","NormalNucleoli",
                 "Mitoses","Class")

#labelling the output classes
data$Class <- factor(data$Class, levels=c(2,4), labels=c("benign", "malignant"))

#splitting the dataset
set.seed(10000)
ind <- sample(2, nrow(data), replace=TRUE, prob=c(0.75, 0.25))
trainData <- data[ind==1,]
validationData <- data[ind==2,]

#making the decision treee
library(party)
ctree = ctree(Class ~ ., data=trainData)
plot(ctree)
#evaluvation function
evaluation <- function(model, data, atype) {
  cat("\nConfusion matrix:\n")
  prediction = predict(model, data, type=atype)
  xtab = table(prediction, data$Class)
  print(xtab)
  cat("\nEvaluation:\n\n")
  accuracy = sum(prediction == data$Class)/length(data$Class)
  precision = xtab[1,1]/sum(xtab[,1])
  recall = xtab[1,1]/sum(xtab[1,])
  f = 2 * (precision * recall) / (precision + recall)
  cat(paste("Accuracy:\t", format(accuracy, digits=3), "\n",sep=" "))
  cat(paste("Precision:\t", format(precision, digits=3), "\n",sep=" "))
  cat(paste("Recall:\t\t", format(recall, digits=3), "\n",sep=" "))
  cat(paste("F-Measure:\t", format(f, digits=3), "\n",sep=" "))
}

#evaluvating our model
evaluation(ctree, validationData, "response")