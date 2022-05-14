library(arules)
library(RColorBrewer)

data("Groceries")

rules <- apriori(Groceries,
                 parameter = list(supp = 0.01, conf = 0.2))

cat("\n\nRules :\n\n")
print(inspect(rules[1:10]))



arules::itemFrequencyPlot(Groceries, topN = 20,
                          col = brewer.pal(8, 'Pastel2'),
                          main = 'Relative Item Frequency Plot',
                          type = "relative",
                          ylab = "Item Frequency (Relative)")