// 13. Write a C program to enter two angles of a triangle and find th third angle.
#include<stdio.h>
int main()
{
	float angle1, angle2, angle3;
	printf("Enter value of angle 1 : ");
	scanf("%f",&angle1);
	printf("Enter value of angle 2 : ");
	scanf("%f",&angle2);
	angle3 = 180 - angle1 - angle2;
	printf("The angle 3 : %f",angle3);
}
