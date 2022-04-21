// 3. Write a program to enter two numbers and perform all arithmetic operations.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of A : ");
	scanf("%d",&a);
	printf("Enter value of B : ");
	scanf("%d",&b);
	printf("Sum : %d\nSubtraction : %d\nMultiply : %d\nDivision : %d\nRemainder : %d",a+b,a-b,a*b,a/b,a%b);
}
