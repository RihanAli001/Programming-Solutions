for_print <- function(l){
  for (i in l){
    cat(i, " ")
  }
}
lst = list(1,2,3,4,5,6)
cat("list : ")
for_print(lst)
cat("\nAfter changing lst[2] = 10\nList : ")
lst[2]=10
for_print(lst)
cat("\nList length : ", length(lst))
n = as.integer(readline(prompt = "Enter a list element : "))
if(n %in% lst){
  cat("Element is present in list")
}else{
  cat("Element is not present in list")
}