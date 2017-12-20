#include <stdio.h>
/**
 * main - program will print range of single digit numbers
 * Return: - program will return zero if compiled properly
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
