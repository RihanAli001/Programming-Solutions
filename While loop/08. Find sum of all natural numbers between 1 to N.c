// Write a C program to find sum of all natural numbers between 1 to N.
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum between 1 to %d : %d",n,sum);
}