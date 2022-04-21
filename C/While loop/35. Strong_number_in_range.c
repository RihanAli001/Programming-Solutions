// Write a C program to print all Strong numbers between 1 to N
#include<stdio.h>

int main()
{
    int n,tmp,i=1,j,fact,strong;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<=n){
        strong=0;
        tmp=i;
        while (tmp>0){
            j=tmp%10;
            fact=1;
            while(j>0){
                fact=fact*j;
                j--;
            }
            strong=strong+fact;
            tmp=tmp/10;
        }
        if(i==strong){
            printf("%d ",i);
        }
        i++;
    }
    
}