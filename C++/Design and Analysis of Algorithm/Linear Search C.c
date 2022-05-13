// c program for Linear search

#include<stdio.h>
#include<conio.h>

int linear_search(int [],int,int);

int main()
{
	int number[10],ele,posi,n=10,i;
	
	printf("\n\t\t\t\t\t[ Element Search Using Binary Search ]\n");
	printf("\n Enter any 10 number >>| ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	
	printf(" Which element do you want to search >>| ");
	scanf("%d",&ele);
	
	posi=linear_search(number,ele,n);
	if(posi!= -1)
	{
		printf("\n Element %d found at %d...",ele,posi);
	}
	else
	{
		printf("\n Element not found...");
	}
	
	getch();
	return 0;
}

int linear_search(int number[],int ele,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(number[i]==ele)
		{
			return i+1;
		}
	}
	return -1;
}
