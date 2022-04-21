// Write a C program to calculate factorial of a number.
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    while (n>0){
        fact=fact*n;
        n--;
    }
    printf("Factorial is : %d",fact);
}