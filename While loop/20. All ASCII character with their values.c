// Write a C program to print all ASCII character with their values
#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 255){
        printf("Character %c : %d\n", i, i);
        i++;
    }
}