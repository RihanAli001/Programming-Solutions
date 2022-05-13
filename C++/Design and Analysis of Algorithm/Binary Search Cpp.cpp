#include<iostream>
using namespace std;

int binary_search(int a[],int ele,int min,int max)
{
    if(min<=max)
    {
        int mid=(min+max)/2;
        if(a[mid]==ele){
            return mid;
        }else if(a[mid]>ele){
            return binary_search(a,ele,min,mid-1);
        }else{
            return binary_search(a,ele,mid+1,max);
        }
    }
    return -1;
}

int main()
{
    int ele,a[10]={1,2,3,4,5,6,7,8,9,10},n=10,index;
    cout<<"Enter element to search : ";
    cin>>ele;
    index=binary_search(a,ele,0,n-1);
    if(index==-1){
        cout<<"Element not found";
    }else{
        cout<<"Element found at "<<index;
    }
}