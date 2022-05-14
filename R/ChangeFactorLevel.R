v = c("a","b","c","b")
cat("Original vector: ")
print(v)
f = factor(v)
cat("\nFactor of the said vector: ")
print(f)
cat("\nAfter replacing (e) : ")
levels(f)[1] = "e"
print(f)