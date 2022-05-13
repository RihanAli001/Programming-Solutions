// Program for search an element from the data.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,a[10];
	
	// input elements number
	cout<<"\t\t\t\t[ You Can Enter Only 10 Elements ]\n\n";
	cout<<"How much elements do you want to enter >>| ";
	cin>>n;
	
	// input elements
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<". Enter element = ";
		cin>>a[i];
	}
	
	// display elements
	cout<<"\nElements are = ";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	
	// input search element
	int ele,flag=0,last;
	cout<<"\n\nWhich element do you want to search (from last) >>| ";
	cin>>ele;
	cout<<"How much last element do you want to search (from last) >>| ";
	cin>>last;
	
	// search position for N last element
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==ele)
		{
			flag++;
			if(flag==last)
			{
				cout<<"\n>> Element Position is "<<i+1;
				break;
			}
		}
	}
	// if element not found
	if(flag!=last)
	{
		cout<<"\n>> Element not found <<";
	}
	
	getch();
	return 0;
}

