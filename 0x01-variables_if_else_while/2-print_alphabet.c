#include <stdio.h>
/**
 * main - program will print the alphabet in lowercase letters
 * Return: - program will return a zero if compiled correctly
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
