#include <stdio.h>
#include <conio.h>
int main()
{
	char a[50];
	int i, alph, dgt, spcl;
	i = alph = dgt = spcl = 0;
	printf("TYPE ANY SENTENCE >>| ");
	gets(a);
	while (a[i] != '\0')
	{
		if ((a[i] >= 'a') && (a[i] <= 'z') || (a[i] >= 'A') && (a[i] <= 'Z'))
		{
			alph++;
		}
		else if ((a[i] >= '0') && (a[i] <= '9'))
		{
			dgt++;
		}
		else
		{
			spcl++;
		}
		i++;
	}
	printf("\nALPHABETS\t\t: %d\nDIGITS\t\t\t: %d\nSPECIAL CHARACTERS\t: %d\n", alph, dgt, spcl);
	getchar();
}