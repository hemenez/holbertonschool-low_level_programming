#include "holberton.h"
/**
 * print_alphabet - program will print the alphabet increasing by one letter
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
