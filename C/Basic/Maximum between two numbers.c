// 18. Find maximum between two numbers.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two numbers : ");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is the maximum number.",a);
	}
	else{
		printf("%d is the maximum number.",b);
	}
}
