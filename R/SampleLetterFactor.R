fact1 <- factor(sample(LETTERS, size=5, replace=TRUE))
fact2 <- factor(sample(LETTERS, size=5, replace=TRUE))
cat("Factor1 : ")
print(fact1)
cat("\nFactor2 : ")
print(fact2)
cat("\nAfter concatenate factor becomes : ")
fact = factor(c(levels(fact1)[fact1],levels(fact2)[fact2]))
print(fact)