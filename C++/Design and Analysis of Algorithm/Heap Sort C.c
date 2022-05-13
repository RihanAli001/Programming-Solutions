// c program for heap sort

#include<stdio.h>
#include<conio.h>

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

void heapify(int a[],int n,int i)
{
	int parent=i;
	int l=2*i+1;
	int r=2*i+2;
	int temp;
	
	if(l<n && a[l]>a[parent])
	{
		parent=l;
	}
	
	if(r<n && a[r]>a[parent])
	{
		parent=r;
	}
	
	if(parent != i)
	{
		temp=a[i];
		a[i]=a[parent];
		a[parent]=temp;
		
		heapify(a,n,parent);
	}
}

void heap_sort(int a[],int n)
{
	int i,temp;
	
	for(i=n/2-1;i>-1;i--)
	{
		heapify(a,n,i);
	}
	
	for(i=n-1;i>0;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp; 
		
		heapify(a,i,0);
	}
}

int main()
{
	int a[100]={2,10,5,6,9,3,8,4,52,50},n=10;
	
	printf(" Before sorting : ");
	display(a,n);
	
	heap_sort(a,n);
	
	printf("\n After  sorting : ");
	display(a,n);
	
	getch();
	return 0;
}
