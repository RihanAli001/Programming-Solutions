// 12. Write a C program to enter any number and calculate its square root.
#include<stdio.h>
#include<math.h>
int main()
{
	float a,result;
	printf("Enter any number : ");
	scanf("%f",&a);
	result = sqrt(a);
	printf("Square root of number : %f",result);
}
