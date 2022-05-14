rectangle_area <- function(a,b){return(a*b)}
rectangle_perimeter <- function(a,b){return(2*(a+b))}
circle_area <- function(r){return(3.14*r*r)}
circle_perimeter <- function(r){return(2*3.14*r)}

cat("=== Shapes Area Or Perimeter ===")
cat("\n1. Rectangle Area")
cat("\n2. Circle Area")
cat("\n3. Rectangle Perimeter")
cat("\n4. Circle Perimeter")
n=as.integer(readline(prompt = "Enter choice : "))

if(n==1 || n==3){
  a=as.integer(readline(prompt = "Enter value of width : "))
  b=as.integer(readline(prompt = "Enter value of breath : "))
}else{
  r=as.integer(readline(prompt = "Enter value of redius : "))
}

res=switch (n,
            rectangle_area(a,b),
            circle_area(r),
            rectangle_perimeter(a,b),
            circle_perimeter(r))
switch (n,
        cat("Rectangle Area : ",res),
        cat("Circle Area : ",res),
        cat("Rectangle Perimeter : ",res),
        cat("Circle Perimeter : ",res))