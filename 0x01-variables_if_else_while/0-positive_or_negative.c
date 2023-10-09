#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * This function serves as the entry point for the program. It initializes
 * the random number generator, generates a random integer, and assigns
 * it to the variable 'n'. The generated random number is within the range
 * [-RAND_MAX/2, RAND_MAX/2].
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
 * Check and print the sign of an integer.
 * This block of code checks whether the integer 'n' is positive, negative,
 * or zero and prints an appropriate message to the console accordingly.
 *
 * @param n The integer to be checked.
 *
 * @return 0 if 'n' is zero, otherwise no specific return value.
 */
	if (n > 0)
{
	printf("%d is positive\n", n);
}
	else if (n < 0)
{
	printf("%d is negative\n", n);
}
	else
{
	printf("is zero\n");
}
	return (0);
}
