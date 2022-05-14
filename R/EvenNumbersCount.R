x <- c(2,5,3,9,8,11,6,44,43,47,67,95,33,65,12,45,12)
count=0
for (i in x) {
  if(i%%2==0){
    count=count+1
  }
}
print(count)