// Write a C program to print all natural numbers from 1 to N
#include <stdio.h>

int main()
{
    int n,i=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
}