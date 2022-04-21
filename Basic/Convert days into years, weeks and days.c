// 10. Write a C program to convert days into years, weeks and days.
#include<stdio.h>
int main()
{
	int days;
	printf("Enter days : ");
	scanf("%d",&days);
	printf("\n%d Years and %d Days\n\tOR\n%d Weeks and %d Days",days/365,days%365,days/7,days%7);
}
