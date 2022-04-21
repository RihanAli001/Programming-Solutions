// Write a C program to count number of digits in a number.
#include <stdio.h>
int main()
{
    int n,count=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>0)
    {
        count++;
        n=n/10;
    }
    printf("Digits in given number : %d",count);
}