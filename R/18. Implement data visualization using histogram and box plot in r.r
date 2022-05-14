setwd("C:\\Users\\Parvej Ali\\Documents")
df <- read.csv("Raw_Housing_Prices.csv")

par(mfrow=c(1,2))
boxplot(df$Sale.Price)
hist(df$Sale.Price)