// Write a C program to print all Armstrong number between 1 to N
#include<stdio.h>
#include<math.h>

int main()
{
    int n,arm,tmp,len,rem,i=1,j;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(i<n){
        tmp=i;
        arm=0;
        len=0;
        while (tmp>0){
            len++;
            tmp=tmp/10;
        }
        tmp=i;
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
        if(arm==i){
            printf("%d ",i);
        }

        i++;
    }
    
}