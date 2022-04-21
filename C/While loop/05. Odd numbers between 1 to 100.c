// Write a C program to print all odd numbers between 1 to 100.
#include <stdio.h>
int main()
{
    int i=1,n=100;
    while(i<=n)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
        i++;
    }
}