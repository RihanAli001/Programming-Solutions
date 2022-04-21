// 16. Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include<stdio.h>
int main()
{
	float hindi, english, math, science, social, total, average, percentage;
	printf("Enter Hindi marks   (out of 100) : ");
	scanf("%f",&hindi);
	printf("Enter English marks (out of 100) : ");
	scanf("%f",&english);
	printf("Enter Math marks    (out of 100) : ");
	scanf("%f",&math);
	printf("Enter Science marks (out of 100) : ");
	scanf("%f",&science);
	printf("Enter Social marks  (out of 100) : ");
	scanf("%f",&social);
	total = hindi + english + math + science + social;
	average = total/5;
	percentage = total*100/500;
	printf("\nTotal      : %f (out of 500)\nAverage    : %f\nPercentage : %f%",total,average,percentage);
}
