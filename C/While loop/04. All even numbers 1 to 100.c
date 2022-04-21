// Write a C program to print all even numbers between 1 to 100.
#include <stdio.h>
int main()
{
    int i = 1, n = 100;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}