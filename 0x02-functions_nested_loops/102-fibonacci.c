#include <stdio.h>
/**
 * main - program will print Fibonacci sequence up to 50th number
 * Return: program will return zero if compiled properly
 */

int main(void)
{
	long a;
	long b;
	long c;
	long count;

	a = 1;
	b = 2;
	c = a + b;

	for (count = 0; count < 50; count++)
	{
		if (count != 49)
		{
			printf("%lu, ", a);
			a = b;
			b = c;
			c = a + b;
		}
		else
			printf("%lu", a);
	}
	printf("\n");
	return (0);
}
