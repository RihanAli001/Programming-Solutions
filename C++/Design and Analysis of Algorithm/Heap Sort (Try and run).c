// c program for heap sort

#include<stdio.h>
#include<conio.h>
#include<string.h>

int N = 5;

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

void heapify(int a[],int n,int i,char space[])
{
	char space1[]="\t",space2[]="\t\t";
	strcat(space1,space);
	strcat(space2,space);
	
	int parent=i;
	int l=2*i+1;
	int r=2*i+2;
	int temp;
	printf("\n%sParent = %d, left_child = %d, right_child = %d\t\t\ta[] = ",space,parent+1,l+1,r+1);
	display(a,N);
	
	if(l<n && a[l]>a[parent])
	{
		parent=l;
		printf("\n%sNew: Parent = %d, Assign with left_child = %d\t\t\ta[] = ",space,parent+1,l+1);
		display(a,N);
	}
	
	if(r<n && a[r]>a[parent])
	{
		parent=r;
		printf("\n%sNew: Parent = %d, Assign with right_child = %d\t\t\ta[] = ",space,parent+1,r+1);
		display(a,N);
	}
	
	if(parent != i)
	{
		printf("\n%sSwap: a[i] = %d To a[Parent] = %d, where i = %d To Parent = %d\ta[] = ",space,a[i],a[parent],i+1,parent+1);
		display(a,N);
		temp=a[i];
		a[i]=a[parent];
		a[parent]=temp;
		
		printf("\n%sHeapify: limit = %d\tParent = %d\t\t\t\t\ta[] = ",space,n,parent+1);
		display(a,N);
		heapify(a,n,parent,space1);
	}
}

void heap_sort(int a[],int n,char space[])
{
	int i,temp;
	char space1[]="\t",space2[]="\t\t";
	strcat(space1,space);
	strcat(space2,space);
	
	printf("\n\n%sFor i = %d Down To %d,\ta[] = ",space,n/2,1);
	display(a,n);
	for(i=n/2-1;i>-1;i--)
	{
		printf("\n\n%sFor i = %d:",space,i+1);
		printf("\n%sHeapify: limit = %d, i = %d\t\ta[] = ",space1,n,i+1);
		display(a,n);
		heapify(a,n,i,space2);
	}
	
	printf("\n\n%sFor i = %d Down To %d,\ta[] = ",space,n,2);
	display(a,n);
	for(i=n-1;i>0;i--)
	{
		printf("\n\n%sFor i = %d:",space,i+1);
		printf("\n%sSwap: a[1] = %d To a[i] = %d\ta[] = ",space1,a[0],a[i]);
		display(a,n);
		temp=a[0];
		a[0]=a[i];
		a[i]=temp; 
		
		printf("\n%sHeapify: limit = %d, i = %d\ta[] = ",space1,i+1,0+1);
		display(a,n);
		heapify(a,i,0,space2);
	}
}

int main()
{
	int a[100]={2,10,5,6,9,3,8,4,52,50},n=5,i;
	char space[]="";
	
//	printf(" Enter array limit : ");
//	scanf("%d",&n);
//	
//	printf(" Enter array elements : ");
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
	
	printf("\n Before sorting : ");
	display(a,n);
	
	heap_sort(a,n,space);
	
	printf("\n After  sorting : ");
	display(a,n);
	
	getch();
	return 0;
}
