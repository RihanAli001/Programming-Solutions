// 9. Write a C program to enter temperature in fahrenheit and convert it into celsius.
#include<stdio.h>
int main()
{
	float celsius, fahrenheit;
	printf("Enter temperature in fahrenheit : ");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit - 32)*5/9;
	printf("Temperature in celsius : %f",celsius);
}
