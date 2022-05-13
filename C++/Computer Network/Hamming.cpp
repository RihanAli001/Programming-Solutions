#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    string msg;
    cout<<"Enter data (in binary) : ";
    cin>>msg;
    int p=0;
    while(msg.length()+p > pow(2,p))
        p++;

    string new_msg=msg;
    for(int i=0;i<p;i++)
        new_msg.insert(new_msg.length()-pow(2,i)+1,"P");
    cout<<"Number of parity bits is : "<<p<<"\nNew data is : "<<new_msg<<"\nNew data length is : "<<new_msg.length();

    for(int i=0;i<p;i++)
    {
        int posi=new_msg.length()-pow(2,i);
        int j=posi;
        int duration = pow(2,i);
        char tmp = '0';
        while (j>=0)
        {
            for(int k=j;k>j-duration && k>=0;k--)
            {
                if(new_msg[k]=='P')
                    continue;
                
                if(new_msg[k]==tmp)
                    tmp = '0';
                else
                    tmp = '1';
            }
            j-=2*duration;
        }
        new_msg[posi]= tmp;
    }
    cout<<"\nFinal data to send is : "<<new_msg;
}