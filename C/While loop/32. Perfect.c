// Write a C program to check whether a number is Perfect number or not
#include<stdio.h>
int main()
{
    int n,i=1,per=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            per=per+i;
        }
        i++;
    }
    if(per==n){
        printf("Given number is Perfect number.");
    }
    else{
        printf("Given number is not Perfect number.");
    }
}