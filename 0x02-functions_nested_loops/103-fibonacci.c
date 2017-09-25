#include <stdio.h>
/**
 * main - function will print Fibonacci sequence of even-valued terms
 * Return: function will return zero if compiled properly
 */

int main(void)
{
	long a, b, c, count, sum;

	a = 1;
	b = 2;
	c = a + b;

	{
		for (count = 0; count < 30; count++)
		{
			c = a + b;
			a = b;
			b = c;
			{
				sum = 2;
				if (sum % 2 == 0)
					sum = sum + c;
			}
		}
		printf("%lu\n", sum);

	}
	return (0);

}
