cat("Student data which is stored offline...\n")
setwd("C:\\Users\\Parvej Ali\\Documents")
student <- read.csv("Student_data.csv")
print(head(student,4))

#cat("\n\nNational labout force projection data which is online...\n")
#df <- read.csv("https://www.stats.govt.nz/assets/Uploads/National-labour-force-projections/National-labour-force-projections-2020base2073/Download-data/National-labour-force-projections-2020base-2073.csv.csv")
#print(head(df))