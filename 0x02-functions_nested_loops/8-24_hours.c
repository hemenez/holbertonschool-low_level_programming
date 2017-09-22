#include "holberton.h"
/**
 * jack_bauer - function will print every minute of the day
 */

void jack_bauer(void)
{
	int first;
	int second;

	{
	for (first = 0; first <= 23; first++)
		for (second = 0; second <= 59; second++)
		{
			_putchar(first / 10 + '0');
			_putchar(first % 10 + '0');
			_putchar(':');
			_putchar(second / 10 + '0');
			_putchar(second % 10 + '0');
			_putchar('\n');
		}
	}
}
