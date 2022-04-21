// 4. Write a C program to enter length and breadth of a rectangle and find its perimeter.
#include<stdio.h>
int main()
{
	float length, breadth, perimeter;
	printf("Enter Breadth : ");
	scanf("%f",&breadth);
	printf("Enter length : ");
	scanf("%f",&length);
	perimeter = 2*(length+breadth);
	printf("Rectangle perimeter : %f",perimeter);
}
