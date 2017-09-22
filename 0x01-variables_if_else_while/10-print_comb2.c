#include <stdio.h>
/**
 * main - project will print sequence of double-digit characters separated
 * Return: - project will return zero if compiled correctly
 */
int main(void)
{
	int f;
	int s;

	for (f = '0'; f <= '9'; f++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			putchar(f);
			putchar(s);
			if (s != '9' || f != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
