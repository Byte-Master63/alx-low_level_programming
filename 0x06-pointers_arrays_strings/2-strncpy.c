#include "main.h"
/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	j = 0;
	while (j < n; n && src[j] != '\n')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\n';
	}
	return (dest);
}
