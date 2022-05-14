for_print <- function(l){
  for (i in l){
    cat(i, " ")
  }
}
lst = list(1,2,3,4,5,6)
cat("list : ")
for_print(lst)
cat("\nAfter adding a item in the list : ")
lst = append(lst, 20)
for_print(lst)
cat("\nAfter deleting an item from the list : ")
lst = lst[-length(lst)]
for_print(lst)