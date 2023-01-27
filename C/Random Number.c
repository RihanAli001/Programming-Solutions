#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j, k, l = 1, flag = 1, value, a[4][4];
	srand(time(0));
	for (l = 0; l < 4; l++)
	{
		for (k = 0; k < 4; k++)
		{
			if ((k == 3) && (l == 3))
				continue;
			while (1)
			{
				value = rand() % 15 + 1;
				for (i = 0; i < 4; i++)
				{
					for (j = 0; j < 4; j++)
					{
						if (value == a[i][j])
						{
							flag = 0;
							break;
						}
						else
						{
							flag = 1;
						}
					}
					if (flag == 0)
						break;
				}
				if (flag == 1)
				{
					a[l][k] = value;
					printf("%02d    ", a[l][k]);
					break;
				}
			}
		}
		printf("\n\n");
	}
}