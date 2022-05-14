x = matrix(c(1:9), nrow = 3)
cat("Display matrix using for loop :\n")
for(i in 1:nrow(x)){
  for(j in 1:ncol(x)){
    cat(x[i,j]," ")
  }
  cat("\n")
}
cat("\nDisplay matrix using while loop :\n")
i=1
while(i <= nrow(x)){
  j=1
  while(j <= ncol(x)){
    cat(x[i,j]," ")
    j=j+1
  }
  i=i+1
  cat("\n")
}
y = matrix(c(10:18), nrow = 3)
cat("\nCombining X and Y matrix :\n")
print(cbind(x,y))