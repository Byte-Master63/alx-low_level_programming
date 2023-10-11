#include "main.h"

/**
 * jack_bauer- Print every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
{
	for (minutes = 0; minutes  < 60; minutes++)
{
	int tens_hour = hours / 10;
	int ones_hour = hours % 10;
	int tens_min = minutes / 10;
	int ones_min = minutes % 10;

	_putchar('0' + tens_hour);
	_putchar('0' + ones_hour);
	_putchar(':');
	_putchar('0' + tens_min);
	_putchar('0' + ones_min);
	_putchar('\n');
}
}
}
