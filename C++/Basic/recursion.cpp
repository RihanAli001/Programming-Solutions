#include<iostream>
using namespace std;

void recursion(string str, int idx, int count, string newString) {
    if (idx == str.length()) {
        for (int i=0;i<count;i++){
            newString += 'x';
        }
        cout<<newString<<"\n";
        return;
    }

    char currChar = str.at(idx);
    if(currChar == 'x'){
        count++;
        recursion(str, idx+1, count, newString);
    }else{
        newString += currChar;
        recursion(str, idx+1, count, newString);
    }
}

int main(int argc, char const *argv[])
{
    recursion("axbcxxd",0,0,"");
    return 0;
}
