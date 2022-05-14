for_print <- function(l){
  for (i in l){
    cat(i, " ")
  }
}
lst = list(1,2,3,4,5,6)
cat("list : ")
for_print(lst)
cat("\nList index ranges : 1 to",length(lst))
cat("\nLoop through a list : ")
for_print(lst)
cat("\nAfter adding another list in above list : ")
lst2 = list(20,21,22)
lst = append(lst,lst2)
for_print(lst)