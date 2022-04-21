// 11. Write a C program to find power of any number x^y.
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,result;
	printf("Enter value of X : ");
	scanf("%d",&x);
	printf("Enter value of Y : ");
	scanf("%d",&y);
	result = pow(x,y);
	printf("Result X^Y : %d",result);
}
