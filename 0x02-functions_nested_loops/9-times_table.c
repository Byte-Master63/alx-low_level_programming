#include "main.h"
#include <stdio.h>

/**
 *main - is the entry point of the program
 *times_table- a function to print the 9 times_table from 0 to 9.
 *This function prints the multiplication results of 9 from 0 to 9.
 *It follows the format "9 x n = result"for each number from 0 to 9.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
{
	result = i * j;

	if (j == 0)
{
	printf("%d", result);
}
	else
{
	if (result < 10)
{
	printf(",  %d", result);
}
	else
{
	printf(", %d", result);
}
}
}
	printf("\n");
}
}
