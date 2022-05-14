facto <- function(n){
  res=1
  while(n){
    res=res*n
    n=n-1
  }
  return(res)
}
n = as.integer(readline(prompt = "Enter number for factorial : "))
cat(facto(n))