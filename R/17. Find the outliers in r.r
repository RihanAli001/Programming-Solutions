setwd("C:\\Users\\Parvej Ali\\Documents")
df <- read.csv("Raw_Housing_Prices.csv")

OutVals = boxplot(df$Sale.Price)$out
print(OutVals)

setwd("D:\\Parvej Ali\\B.Tech(C.S)\\Data Warehousing & Data Mining With R - Programming\\Assignment 3")
df <- read.csv("abc.csv")
ov <- plot(df$House_Price, df$Area)
print(ov)

