#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
    int w,f;
    cout<<"Enter window size : ";
    cin>>w;
    cout<<"Enter number of frames to transmit : ";
    cin>>f;
    int frames[f];
    cout<<"Enter "<<f<<" frames : ";
    for(int i=0;i<f;i++)
        cin>>frames[i];
    int i=0;
    while (i<f)
    {
        sleep(1);
        cout<<"\nWindow "<<(i/w)+1<<" is : ";
        int j;
        for(j=i;j<w+i && j<f;j++)
        {
            cout<<frames[j]<<" ";
        }
        sleep(1);
        cout<<"\t\tAck "<<(i/w)+1<<" Recieved";
        i=j;
    }
    sleep(1);
    cout<<"\n";
}