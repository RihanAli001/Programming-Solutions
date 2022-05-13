// c program for binary search

#include<stdio.h>
#include<conio.h>
using namespace std;

void sort(int *,int);
int binary_search(int [],int,int,int);

int main()
{
	int number[10],ele,posi;
	
	printf("\n\t\t\t\t\t[ Element Search Using Binary Search ]\n");
	printf("\n Enter any 10 number >>| ");
	
	for(int i=0;i<10;i++)
	{
		scanf("%d",&number[i]);
	}
	
	sort(number,10);
	
	printf("\n Here is the sort elements ==> ");
	for(int i=0;i<10;i++)
	{
		printf(" %d,",number[i]);
	}
	
	printf("\n Which element do you want to search >>| ");
	scanf("%d",&ele);
	
	posi=binary_search(number,ele,0,9);
	printf("\n");
	
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

void sort(int *arr,int count)
{
	int a,i,j;
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				a=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=a;
			}
		}
	}
}

int binary_search(int number[],int ele,int min,int max)
{
	int mid;
	if(min>max)
	{
		return -1;
	}
	else
	{
		mid=(min+max)/2;
		printf("\n Min = %d  Mid = %d  Max = %d",min+1,mid+1,max+1);
		
		if(number[mid]==ele)
		{
			return mid+1;
		}
		else if(number[mid]>ele)
		{
			return binary_search(number,ele,min,mid-1);
		}
		else if(number[mid]<ele)
		{
			return binary_search(number,ele,mid+1,max);
		}
	}
}
