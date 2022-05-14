data <- data.frame(marks1 = c(NA, 22, NA, 49, 75),
                   marks2 = c(81, 14, NA, 61, 12),
                   marks3 = c(78.5, 19.325, NA, 28, 48.002))
cat("# Dataframe with missing values :\n\n")
print(data)

mean_val <- colMeans(data,na.rm = TRUE)


for(i in colnames(data))
  data[,i][is.na(data[,i])] <- mean_val[i]

cat("\n\n# Dataframe without missing values :\n\n")
print(data)