// Write a C to find all factors of a number
#include <stdio.h>

int main()
{
    int n,i=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            printf("%d, ",i);
        }
        i++;
    }
}