// 5. Write a C program to enter length and breadth of a rectangle and find its area.
#include<stdio.h>
int main()
{
	float length, breadth, area;
	printf("Enter length : ");
	scanf("%f",&length);
	printf("Enter breadth : ");
	scanf("%f",&breadth);
	area = length*breadth;
	printf("Rectangle area : %f",area);
}
