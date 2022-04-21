// Write a C program to check whether a number is palindrome or not.
#include <stdio.h>
int main()
{
    int n,tmp,res=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    tmp=n;
    while(tmp>0)
    {
        res=(res*10)+tmp%10;
        tmp=tmp/10;
    }
    if(res==n){
        printf("PALINDROME");
    }
    else{
        printf("NOT PALINDROME");
    }
}