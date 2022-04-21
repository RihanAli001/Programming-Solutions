// Write a C program to swap first and last digits of a number.
#include <stdio.h>
int main()
{
    int n,f,l,tmp,multiple=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    tmp=n;
    l=n%10;
    while(tmp>9)
    {
        tmp=tmp/10;
        multiple=multiple*10;
    }
    f=tmp%10;
    n=n-l;
    n=n+f;
    n=n-(f*multiple);
    n=n+(l*multiple);
    printf("After swapping : %d",n);
}