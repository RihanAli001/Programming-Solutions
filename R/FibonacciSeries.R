n = as.integer(readline(prompt = "Enter count of fibonacci series : "))
f=0
s=1
for(i in 1:n){
  cat(s," ")
  s=f+s
  f=s-f
}