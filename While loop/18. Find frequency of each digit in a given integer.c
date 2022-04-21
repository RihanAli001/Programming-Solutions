// Write a C program to find frequency of each digit in a given integer.
#include <stdio.h>
int main()
{
    int n,a[10]={0};
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>0)
    {
        a[n%10]++;
        n=n/10;
    }
    for (n=0;n<10;n++){
        if(a[n]!=0){
            printf("Frequency of %d : %d\n",n,a[n]);
        }
    }
}