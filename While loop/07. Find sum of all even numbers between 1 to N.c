// Write a C program to find sum of all even numbers between 1 to n.
#include <stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("Sum of all even number between 1 to %d : %d",n,sum);
}