#include "main.h"

/**
 *_isalpha- Check if  character is alphabetic (lowercase or uppercase).
 *@c: The character to be checked.
 *
 *Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
	else
{
	return (0);
}
}
