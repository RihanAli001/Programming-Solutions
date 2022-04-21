// Write a C program to find sum of all Prime numbers between 1 to N.
#include<stdio.h>
int main()
{
    int n,i=1,j,per,sum=0;
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
            sum=sum+i;
            printf("%d ",i);
        }
        i++;
    }
    printf("\nSum is : %d",sum);
}