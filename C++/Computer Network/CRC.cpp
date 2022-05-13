#include <iostream>
using namespace std;

string data_remainder(string data,string key)
{
    while(data.length() >= key.length())
    {
        for(int i=0;i<key.length();i++)
        {
            if(data[i]==key[i])
                data[i]='0';
            else
                data[i]='1';
        }
        while(data[0]=='0')
            data.erase(0,1);
    }
    if(data.length()==0)
        return "0";
    else 
        return data;
}

int main()
{
    cout<<"-----Sender side ------\n";
    string msg, key;
    cout<<"Enter the data (in binary) : ";
    cin>>msg;
    cout<<"Enter the key (in binary) : ";
    cin>>key;

    for (int i = 0; i < key.length(); i++)
        msg.push_back('0');

    cout<<"New data is : "<<msg;
    string rmder = data_remainder(msg,key);
    cout<<"\nRemainder is : "<<rmder;
    for(int i=msg.length()-1,j=rmder.length()-1;j>=0;i--,j--)
        msg[i]=rmder[j];
    cout<<"\nFinal data to send : "<<msg;
    cout<<"\n\n------Reciever side ------";
    cout<<"\nReceived data : "<<msg;
    cout<<"\nRemainder is : "<<data_remainder(msg,key);
    if(data_remainder(msg,key)=="0"){
        cout<<"\nActual data is : ";
        for(int i=0;i<msg.length()-key.length();i++)
            cout<<msg[i];
    }
    else
        cout<<"\nError in received data";
}