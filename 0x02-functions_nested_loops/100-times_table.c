#include "main.h"

/**
 * print_times_table - Print the n times table, starting from o.
 * @n: The value for which the times table is printed.
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
int i, j, result;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
	result = i * j;
if (j == 0)
{
	printf("%d", result);
}
else
{
if (result < 10)
	printf(", %d", result);
}
else if (result < 100)
{
	printf(", %d", result);
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
