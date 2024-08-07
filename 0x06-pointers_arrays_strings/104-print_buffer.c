#include "main.h"
#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
printf("%02x", (unsigned char)b[i + j]);
if (j % 2 != 0)
{
printf(" ");
}
}
else
{
printf("  ");
if (j % 2 != 0)
{
printf(" ");
}
}
}
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
char c = b[i + j];
if (isprint(c))
{
printf("%c", c);
}
else
{
printf(".");
}
}
else
{
printf(" ");
}
}
printf("\n");
}
}
