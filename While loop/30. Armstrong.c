// Write a C program to check whether a number is Armstrong number or not
#include<stdio.h>
#include<math.h>

int main()
{
    int n,arm=0,tmp,len=0,rem,j;
    printf("Enter any number : ");
    scanf("%d",&n);
    tmp=n;
    while (tmp>0){
        len++;
        tmp=tmp/10;
    }
    tmp=n;
    while (tmp>0){
        rem=1;
        j=0;
        while(j<len){
            rem=rem*(tmp%10);
            j++;
        }
        arm=arm+rem;
        tmp=tmp/10;
    }
    if(arm==n){
        printf("Given number is Armstrong number.");
    }
    else{
        printf("Given number is not Armstrong number.");
    }
}