// Write a c program to find all prime factors of a number
#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        if(n%i==0){
            j=2;
            while(j<i/2+1){
                if(i%j==0)
                {
                    break;
                }
                j++;
            }
            if(i/2+1==j){
                printf("%d ",i);
            }
        }
    }
}