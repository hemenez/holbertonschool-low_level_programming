#include <stdio.h>
/**
 * main - program will compute and print sum of all multiples of 3 and 5
 * Return: program will return a zero if compiled correctly
 */
int main(void)
{
	int n;
	int sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
