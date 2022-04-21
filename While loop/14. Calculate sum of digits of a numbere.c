// Write a C program to calculate sum of digits of a number.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("Sum of digits of a number : %d",sum);
}