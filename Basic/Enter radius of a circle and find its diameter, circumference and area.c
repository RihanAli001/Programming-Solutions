// 6. Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include<stdio.h>
int main()
{
	float radius, diameter, circumference, area;
	printf("Enter circle radius : ");
	scanf("%f",&radius);
	diameter = 2*radius;
	circumference = 2*3.14*radius;
	area = 3.14*radius*radius;
	printf("Diameter : %f\nCircumference : %f\nArea : %f",diameter,circumference,area);
}
