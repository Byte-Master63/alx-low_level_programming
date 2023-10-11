#include "main.h"

/**
 *print_sign- Print the sign of a number.
 *@n: The number to checked.
 *
 *Return: 1 and prints the + if n is greater than zero
 *and prints 0 if n is zero,
 *and prints -1  if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
	else
{
	_putchar('-');
	return (-1);
}
}
