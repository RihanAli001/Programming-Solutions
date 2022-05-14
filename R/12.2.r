students <- data.frame(Name = c("Parvej Ali","Rihan Ali","Abc"),
                       Enrollment = c(56,56,100),
                       Program = c("B.Tech","B.Tech","B.Tech"))
print(students)
cat("\nRemoving 3rd row and 3rd column from dataframe :\n")
students <- students[-3,-3]
print(students)
cat("\nTotal rows :",nrow(students),"and total columns :",ncol(students))