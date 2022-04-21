// Write a C program to enter a number and print it in words
#include <stdio.h>

int main()
{
    int i=0,n,tmp[20]={0};
    char num[10][10]={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>0){
        tmp[i++]=n%10;
        n=n/10;
    }
    while(i>0){
        printf("%s ",num[tmp[--i]]);
    }
}