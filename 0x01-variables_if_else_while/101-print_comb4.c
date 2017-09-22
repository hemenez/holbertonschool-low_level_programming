#include <stdio.h>
/**
 * main - this program will print non-repeat, three-digit numbers sequentially
 * Return: - program will return zero if compiled properly
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			for (third = '0'; third <= '9'; third++)
			{
				if (first < second && first < third && second < third)
				{
					putchar(first);
					putchar(second);
					putchar(third);

					if (first != '7' || second != '8' || third != '9')
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
