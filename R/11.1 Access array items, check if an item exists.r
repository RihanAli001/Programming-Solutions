x <- array(c(c(1:3),c(4:9)),dim = c(3,3))
cat("Array X :\n")
print(x)
n = as.integer(readline(prompt = "Enter array element : "))
if(n %in% x){
  cat(n,"is present in array")
}else{
  cat(n,"is not present in array")
}
cat("\nElement at 2nd row and 2 column in array :",x[2,2])