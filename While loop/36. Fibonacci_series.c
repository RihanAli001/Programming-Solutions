// Write a C program to print Fibonacci series up to n terms
#include<stdio.h>

int main()
{
    int n,first=0,second=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>0){
        printf("%d ",second);
        second=first+second;
        first=second-first;
        n--;
    }
}