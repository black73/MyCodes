png()
png(filename = "cars.png")

plot(cars, main = "Cars", cex.main = 1, xlab = "Speed of cars", ylab = "Distance of Cars", cex.lab = 1)

fit <- lm(dist ~ speed, data = cars)

lines(cars$speed, fitted(fit), col = "red")

dev.off()

