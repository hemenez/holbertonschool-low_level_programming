#include "holberton.h"
/**
 * print_alphabet_x10 - program will print the alphabet ten times in a row
 */

void print_alphabet_x10(void)
{
	int number;
	int alpha;

	for (number = '0'; number <= '9'; number++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
