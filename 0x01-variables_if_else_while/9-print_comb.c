#include <stdio.h>
/**
 * main - The program will print all possible combos of single-digt numbers
 * Return: - The program will return zero if program compiles properly
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
