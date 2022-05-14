library("dplyr")
data("iris")
cat("Summary of iris :\n")
print(summary(iris))
cat("\nSample_n of iris :\n")
print(sample_n(iris, 3))
index <- sample(1:nrow(iris), 3)
cat("\nRandom Sample data from iris:\n")
print(iris[index,])
cat("\nFrequency table for species:\n")
print(table(iris$Species))
cat("\nFilter data by species = setosa:\n")
print(head(filter(iris, Species == "setosa"), 3))