#include <stdio.h>
/**
 * main - project will print unrepeated sequence of double-digits
 * Return: - project will return zero if compiled correctly
 */
int main(void)
{
	int first;
	int second;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			if (first < second)
			{
				putchar(first);
				putchar(second);
				{
					if (first != '8' || second != '9')
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
