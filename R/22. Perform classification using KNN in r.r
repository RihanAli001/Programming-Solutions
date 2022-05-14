library(e1071)
library(caTools)
library(class)

data(iris)
cat("# Iris dataset :\n\n")
print(head(iris))

split <- sample.split(iris, SplitRatio = 0.7)
train_cl <- subset(iris, split == "TRUE")
test_cl <- subset(iris, split == "FALSE")

train_scale <- scale(train_cl[, 1:4])
test_scale <- scale(test_cl[, 1:4])

classifier_knn <- knn(train = train_scale,
                      test = test_scale,
                      cl = train_cl$Species,
                      k = 1)

cm <- table(test_cl$Species, classifier_knn)
cat("\n# Confusiin Matrix :\n\n")
print(cm)

cat("\n\n# Accuracy :\n\n")
misClassError <- mean(classifier_knn != test_cl$Species)
print(paste('Accuracy (K = 1) =', 1-misClassError))


classifier_knn <- knn(train = train_scale,
                      test = test_scale,
                      cl = train_cl$Species,
                      k = 3)
misClassError <- mean(classifier_knn != test_cl$Species)
print(paste('Accuracy (K = 3) =', 1-misClassError))


classifier_knn <- knn(train = train_scale,
                      test = test_scale,
                      cl = train_cl$Species,
                      k = 5)
misClassError <- mean(classifier_knn != test_cl$Species)
print(paste('Accuracy (K = 5) =', 1-misClassError))


classifier_knn <- knn(train = train_scale,
                      test = test_scale,
                      cl = train_cl$Species,
                      k = 7)
misClassError <- mean(classifier_knn != test_cl$Species)
print(paste('Accuracy (K = 7) =', 1-misClassError))


classifier_knn <- knn(train = train_scale,
                      test = test_scale,
                      cl = train_cl$Species,
                      k = 15)
misClassError <- mean(classifier_knn != test_cl$Species)
print(paste('Accuracy (K = 15) =', 1-misClassError))


classifier_knn <- knn(train = train_scale,
                      test = test_scale,
                      cl = train_cl$Species,
                      k = 19)
misClassError <- mean(classifier_knn != test_cl$Species)
print(paste('Accuracy (K = 19) =', 1-misClassError))
