// Write a C program to find first and last digit of a number.
#include <stdio.h>
int main()
{
    int n,f,l;
    printf("Enter any number : ");
    scanf("%d",&n);
    l=n%10;
    while(n>9)
    {
        n=n/10;
    }
    f=n;
    printf("First digit : %d\nLast digit  : %d",f,l);
}