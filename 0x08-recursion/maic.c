#include <stdio.h>

/**
 * main - Entry point
 * factorial - calculate factorial
 * @n: unspecified integer
 * Return: Always 0 (Success)
 *
 */

unsigned int factorial(unsigned int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

int main(void)
{
	unsigned int n = 5;

	printf("%d\n", factorial(n));
	return (1);
}
