// Write a C program to find power of a number
#include <stdio.h>

int main()
{
    int n,p,res=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Enter power : ");
    scanf("%d",&p);
    printf("%d the power of %d : ",n,p);
    while(p>0){
        res=res*n;
        p--;
    }
    printf("%d",res);
}