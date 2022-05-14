x <- array(c(c(1:3),c(4:9)),dim = c(3,3))
cat("Display array using loop :\n")
for(i in 1:nrow(x)){
  for(j in 1:ncol(x)){
    cat(x[i,j]," ")
  }
  cat("\n")
}
cat("\nTotal rows :",nrow(x),"and total columns :",ncol(x))
cat("\nLength of array :",length(x))