#include <stdio.h>
char month[12][20] = {"J A N U A R Y", "F A B R U A R Y", "M A R C H", "A P R I L", "M A Y", "J U N E", "J U L Y", "A U G U S T", "S E P T E M B E R", "O C T O B E R", "N O V E M B E R", "D E C E M B E R"};
int main(int argc, char *argv[])
{
	int i;
	printf("[  M O N T H S   N A M E . . .   ]\n\n");
	for (i = 0; i < 12; i++)
		printf("\n||\t\t%17s\t\t||\n", month[i]);
}