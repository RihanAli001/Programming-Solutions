prime <- function(n){
  if(n<2){
    return(0)
  }
  i=2
  while(i<(n/2+1)) {
    if(n%%i==0){
      return(0)
    }
    i=i+1
  }
  return(1)
}

num = as.integer(readline(prompt = "Enter prime number : "))
if(prime(num)){
  cat(num,"is prime")
}else{
  cat(num,"is not prime")
}