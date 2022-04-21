// Write a C program to enter a number and print its reverse.
#include <stdio.h>
int main()
{
    int n,res=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>0)
    {
        res=(res*10)+n%10;
        n=n/10;
    }
    printf("Reverse of number : %d",res);
}