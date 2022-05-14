library(ClusterR)
library(cluster)

data(iris)

iris_1 <- iris[, -5]

set.seed(240)
kmeans.re <- kmeans(iris_1, centers = 3, nstart = 20)

par(mfrow=c(1,2))

cm <- table(iris$Species, kmeans.re$cluster)
cat("Confusion Matrix :\n")
print(cm)

plot(iris_1[c("Sepal.Length", "Sepal.Width")],
     col = kmeans.re$cluster,
     main = "K-means with 3 clusters")

points(kmeans.re$centers[, c("Sepal.Length", "Sepal.Width")],
       col = 1:3, pch = 8, cex = 3)

y_kmeans <- kmeans.re$cluster
clusplot(iris_1[, c("Sepal.Length", "Sepal.Width")],
         y_kmeans,
         lines = 0,
         shade = TRUE,
         color = TRUE,
         labels = 2,
         plotchar = FALSE,
         span = TRUE,
         main = paste("Cluster iris"),
         xlab = 'Sepal.Length',
         ylab = 'Sepal.Width')