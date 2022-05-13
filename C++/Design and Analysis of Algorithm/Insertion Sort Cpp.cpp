// cpp program for insertion sort
#include<iostream>
#include<conio.h>
using namespace std;

void insertion_sort(int *,int);
void display(int *,int);

int main()
{
	int n,ele[10];
	cout<<"\n\t\t\t\t\t[ INSERTION SORT ]\n";
	cout<<" Enter limit >>| ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"\tEnter element "<<i+1<<" >>| ";
		cin>>ele[i];
	}
	
	cout<<"\n\n Before Sorting >>| ";
	display(ele,n);
	
	insertion_sort(ele,n);
	
	cout<<"\n After  Sorting >>| ";
	display(ele,n);
	
	getch();
	return 0;
}

void insertion_sort(int *a,int n)
{
	int key,j;
	
	for(int i=1;i<n;i++)
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
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
}
