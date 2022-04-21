// Write a C program to print all alphabets from a to z.
#include <stdio.h>
int main()
{
    char c='a';
    while(c<='z')
    {
        printf("%c ",c);
        c++;
    }
}