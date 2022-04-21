// Write a C program to find HCF (GCD) of two numbers
#include <stdio.h>

int main()
{
    int n1,n2,i=1,hcf;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    while(i<=n1 && i<=n2){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
        i++;
    }
    printf("HCF : %d",hcf);
}