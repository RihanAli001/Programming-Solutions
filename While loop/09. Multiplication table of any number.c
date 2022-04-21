// Write a C program to print multiplication table of any number.
#include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }
}