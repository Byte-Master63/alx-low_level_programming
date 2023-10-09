#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * This function serves as the entry point for the program. It initializes
 * the random number generator, generates a random integer within a specified
 * range, extracts the last digit of that integer, and prints the result.
 * @return 0 on successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int LastDigit = n % 10;

	printf("Last digit of %d is %d\n", n, LastDigit);
if (LastDigit > 5)
{
	printf("greater than 5\n");
}
else if (LastDigit == 0)
{
	printf("is zero\n");
}
else
{
	printf("is less than 6 and not 0\n");
}
	return (0);
}
