// cpp program of selection sorting
#include<iostream>
#include<conio.h>
using namespace std;

void display(int *,int);
void selection_sort(int *,int);

int main()
{
	int n,ele[10];
	
	cout<<"\n\t\t\t\t\t[ SELECTION SORTING ]\n";
	cout<<"\n Enter limit of elements >>| ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<" Enter element "<<i+1<<" >>| ";
		cin>>ele[i];
	}
	
	cout<<"\n Before Sorting..."<<endl;
	display(ele,n);
	
	selection_sort(ele,n);
	
	cout<<"\n After Sorting..."<<endl;
	display(ele,n);
	
	getch();
	return 0;
}

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
}

void selection_sort(int a[],int n)
{
	int temp;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
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
