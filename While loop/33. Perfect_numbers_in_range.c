// Write a C program to print all Perfect numbers between 1 to N.
#include<stdio.h>
int main()
{
    int n,i=1,j,per;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<=n){
        per=0;
        j=1;
        while(j<i){
            if(i%j==0){
                per=per+j;
            }
            j++;
        }
        if(per==i){
            printf("%d ",i);
        }
        i++;
    }
}