#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but gor multiples of three prints Fizzy instead of the number.
 * and for the multiples of five prints Buzz.
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
	} else if (i % 5 == 0 && i % 3 != 0)
	{
		printf("Buzz");
	} else if (i == 1)
	{
		printf("%d", i);
	} else
	{
		printf(" %d", i);
	}
	}
	printf("\n");
	return (0);
}
