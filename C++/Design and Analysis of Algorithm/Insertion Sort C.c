// c program for insertion sort
#include<stdio.h>
#include<conio.h>

void insertion_sort(int *,int);
void display(int *,int);

int main()
{
	int n,ele[10],i;
	printf("\n\t\t\t\t\t[ INSERTION SORT ]\n");
	printf(" Enter limit >>| ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\tEnter element %d >>| ",i+1);
		scanf("%d",&ele[i]);
	}
	
	printf("\n\n Before Sorting >>| ");
	display(ele,n);
	
	insertion_sort(ele,n);
	
	printf("\n After  Sorting >>| ");
	display(ele,n);
	
	getch();
	return 0;
}

void insertion_sort(int *a,int n)
{
	int key,j,i;
	
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while((a[j] > key)&&(j > -1))
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=key;
	}
}

void display(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
}
