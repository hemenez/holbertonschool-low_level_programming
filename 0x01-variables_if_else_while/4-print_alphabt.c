#include <stdio.h>
/**
 * main - program will print the alphabet in lowercase letters
 * Return: - program will return a zero if compiled correctly
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	putchar('\n');
	return (0);
}
