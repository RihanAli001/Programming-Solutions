// 1. Write a C program to perform input/output of all basic data types.
#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	double d;
	printf("Enter character : ");
	scanf("%c",&c);
	printf("Enter integer : ");
	scanf("%d",&a);
	printf("Enter float : ");
	scanf("%f",&b);
	printf("Enter double : ");
	scanf("%lf",&d);
	printf("Character : %c\nInteger : %d\nFloat : %f\nDouble : %lf",c,a,b,d);
}
