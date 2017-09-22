#include <stdio.h>

/**
 * main - this program will print all possible combos of two-digit numbers
 * Return: - program will return zero if compiled properly
 */
int main(void)
{
	int first;
	int second;

	{
		for (first = 0; first < 99; first++)
		{
			for (second = first + 1; second <= 99; second++)
			{
				putchar(first / 10 + '0');
				putchar(first % 10 + '0');
				putchar(' ');
				putchar(second / 10 + '0');
				putchar(second % 10 + '0');
				{
					if (first != 98 || second != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
