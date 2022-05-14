mat <- matrix(data = seq(10,21,by=1),nrow=6,ncol=2)
for(r in 1:nrow(mat)){
  for (c in 1:ncol(mat)) {
    print(paste("mat[",r,",",c,"]=",mat[r,c]))
  }
}
print(mat)