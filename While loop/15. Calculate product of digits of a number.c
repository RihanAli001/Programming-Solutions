// Write a C program to calculat product of digit of a number.
#include <stdio.h>
int main()
{
    int n,product=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>0)
    {
        product=product*(n%10);
        n=n/10;
    }
    printf("Product of digits of a number : %d",product);
}