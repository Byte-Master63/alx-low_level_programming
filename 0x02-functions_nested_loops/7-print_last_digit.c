#include "main.h"

/**
 *print_last_digit- Print the last digit of a number.
 *@n: The number for which the last digit is to be printed
 *
 *Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
{
	lastDigit = -lastDigit;
}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
