students <- data.frame(Name = c("Parvej Ali","Rihan Ali","Abc"),
                       Enrollment = c(56,56,100),
                       Program = c("B.Tech","B.Tech","B.Tech"))
cat("Summary of dataframe :\n")
print(summary(students))
cat("\nNames column from dataframe :\n")
print(students$Name)
cat("\nAdd one more column :\n")
students$Semester <- c(6,7,5)
print(students)
cat("\nAdd one more row :\n")
students <- rbind(students,c("Def",101,"B.Tech",4))
print(students)