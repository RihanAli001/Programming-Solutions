// Write a c program to check whether a number is prime number or not
#include<stdio.h>

int main()
{
    int n,i=2;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<n/2+1){
        if(n%i==0){
            break;
        }
        i++;
    }
    if(n/2+1==i){
        printf("Given number is Prime number.");
    }
    else{
        printf("Given number is not Prime number.");
    }
}