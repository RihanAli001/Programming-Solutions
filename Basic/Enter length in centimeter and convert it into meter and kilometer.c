// 7. Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include<stdio.h>
int main()
{
	float length, meter, kilometer;
	printf("Enter the length : ");
	scanf("%f",&length);
	meter = length/100;
	kilometer = meter/1000;
	printf("Length in meter : %f\nLength in kilometer : %f",meter,kilometer);
}
