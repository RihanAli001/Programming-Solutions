// Write a C program to find sum of all odd numbers between 1 to N.
#include <stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("Sum of odd numbers between 1 to %d : %d",n,sum);
}