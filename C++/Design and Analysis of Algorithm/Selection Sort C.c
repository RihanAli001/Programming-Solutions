// c program of selection sorting
#include<stdio.h>
#include<conio.h>

void display(int *,int);
void selection_sort(int *,int);

int main()
{
	int n,ele[10],i;
	
	printf("\n\t\t\t\t\t[ SELECTION SORTING ]\n");
	printf("\n Enter array limit >>| ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\tEnter element %d >>| ",i+1);
		scanf("%d",&ele[i]);
	}
	
	printf("\n Before Sorting... ");
	display(ele,n);
	
	selection_sort(ele,n);
	
	printf("\n After  Sorting... ");
	display(ele,n);
	
	getch();
	return 0;
}

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}

void selection_sort(int a[],int n)
{
	int temp,i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
