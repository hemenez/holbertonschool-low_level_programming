#include <stdio.h>
/**
 * main - program will print alphabet in reverse
 * Return: - program will return zero if compiled properly
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
