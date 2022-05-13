// c program for bubble sort
#include<stdio.h>
#include<conio.h>

void bubble_sort(int *,int);
void display(int *,int);

int main()
{
	int arr[10],n,i;
	
	printf("\n\t\t\t\t\t[ BUBBLE SORTING ]\n");
	printf("\n Type limit >>| ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\tElement %d >>| ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\n Before sorting.... >> ");
	display(arr,n);
	bubble_sort(arr,n);
	printf("\n\n After  sorting.... >> ");
	display(arr,n);
	
	getch();
	return 0;
}

void bubble_sort(int arr[],int n)
{
	int i,j,temp;

	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void display(int arr[],int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
}
