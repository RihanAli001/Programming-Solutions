armstrong <- function(n){
  res=0
  tmp=n
  while(tmp){
    res=res+(tmp%%10)^3
    tmp=as.integer(tmp/10)
  }
  if(res==n){
    return(1)
  }else{
    return(0)
  }
}
n = as.integer(readline(prompt = "Enter armstrong number : "))
if(armstrong(n)){
  cat(n," is armstrong")
}else{
  cat(n," is not armstong")
}