// Write a C program to check whether a number is Strong number or not
#include<stdio.h>

int main()
{
    int n,tmp,i,fact,strong=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    tmp=n;
    while (tmp>0){
        i=tmp%10;
        fact=1;
        while(i>0){
            fact=fact*i;
            i--;
        }
        strong=strong+fact;
        tmp=tmp/10;
    }
    if(n==strong){
        printf("Given number is Strong number.");
    }
    else{
        printf("Given number is not Strong number.");
    }
}