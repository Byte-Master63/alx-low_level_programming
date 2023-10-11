#include "main.h"
#include <stdio.h>

/**
 *times_table - Print the 9 times table, starting with.
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
