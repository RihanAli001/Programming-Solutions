x = matrix(c(1:9), nrow = 3)
print(x)
n = as.integer(readline(prompt = "Enter any matrix element : "))
if(n %in% x){
  cat(n,"is present in matrix")
}else{
  cat(n,"is not present in matrix")
}
cat("\nRows in matrix :",nrow(x))
cat("\nColumns in matrix :",ncol(x))
cat("\nMatrix length :",length(x))