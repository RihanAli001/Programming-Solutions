// 17. Write a C program to enter P, T, R and calculate simple interest.
#include<stdio.h>
int main()
{
	float p, t, r, interest;
	printf("Enter value of P : ");
	scanf("%f",&p);
	printf("Enter value of T : ");
	scanf("%f",&t);
	printf("Enter value of R : ");
	scanf("%f",&r);
	interest = p*(1+r*t);
	printf("Interest : %f",interest);
}
