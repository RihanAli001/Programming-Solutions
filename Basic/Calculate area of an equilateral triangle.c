// 15. Write a program to calculate area of an equilateral triangle.
#include<stdio.h>
int main()
{
	float a, area;
	printf("Enter length of equilateral side : ");
	scanf("%f",&a);
	area = (a*a*1.732)/4;
	printf("Area : %f",area);
}
