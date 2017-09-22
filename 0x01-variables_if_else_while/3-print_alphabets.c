#include <stdio.h>
/**
 * main - The program will print both upper and lowercase alphabet letters
 * Return: - The program will return a zero if compiled properly
 */

int main(void)
{
	int lower;
	int upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
