#include <stdio.h>
/**
 * main - function will print largest prime factor of given value
 * Return: function will return zero if compiled properly
 */

int main(void)
{
	long num = 612852475143;
	long div;

	for (div = 2; div < num;)
	{
		if (num % div == 0)
		{
			num = num / div;
			div = 2;
		}
		else
			div++;
	}
	printf("%lu\n", num);
	return (0);
}
