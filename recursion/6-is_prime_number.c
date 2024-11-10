#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - return 1 is a prime number, otherwise return 0.
 * @n: prime number = 1, otherwise = 0.
 * Return: prime number
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	for (i = 3; i * i <= n; i += 2)
		{
		if (n % i == 0)
			return (0);
		}
	return (1);
}
