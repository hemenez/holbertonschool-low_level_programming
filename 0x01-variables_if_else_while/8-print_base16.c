#include <stdio.h>
/**
 * main - the program will print a list of base16 numbers
 * Return: - the program will return zero if compiled properly
 */

int main(void)
{
	int d;
	int a;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
