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
	int ele,flag=0;
	cout<<"\n\nWhich element do you want to search >>| ";
	cin>>ele;
	
	// seach position of given element
	for(int i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			cout<<"Element Position is "<<i+1<<"\n";
			flag=1;
			// for display one element only
			break;
		}
	}
	// if element not found
	if(flag==0)
	{
		cout<<"Element not found.";
	}
	
	getch();
	
	return 0;
}

