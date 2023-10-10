#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function serves as the entry point for the program. It initializes
 * the random number generator, generates a random integer within a specified
 * range, extracts the last digit of that integer, and prints the result.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
