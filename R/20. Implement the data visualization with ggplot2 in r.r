library(ggplot2)
library(dplyr)
print(ggplot(data = mtcars, aes(x = hp, y = mpg, col = factor(cyl))) + geom_point()
      + stat_smooth(method = lm, col = "red"))