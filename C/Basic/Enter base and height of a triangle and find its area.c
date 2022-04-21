// 14. Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
int main()
{
	float base, height, area;
	printf("Enter rectangle base : ");
	scanf("%f",&base);
	printf("Enter rectangle height : ");
	scanf("%f",&height);
	area = 0.5*base*height;
	printf("Area : %f",area);
}
