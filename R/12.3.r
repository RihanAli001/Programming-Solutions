students <- data.frame(Name = c("Parvej Ali","Rihan Ali","Abc"),
                       Enrollment = c(56,56,100),
                       Program = c("B.Tech","B.Tech","B.Tech"))
print(students)
cat("\nDataframe length :",length(students))
cat("\n\nCombine two dataframes :\n")
students2 <- data.frame(Enrollment = c(56,101,80),
                        Semester = c(6,7,5))
students <- merge(x = students, y = students2, by = "Enrollment", all = TRUE)
print(students)