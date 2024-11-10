#include "main.h"
#include <stdio.h>

int _sqrt_helper(int n, int i);


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: Number
 * Return: The square root if found, otherwise -1 if no natural square root.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - checks if an integer has a natural square root.
 * @n: The number whose square root is being checked.
 * @i: The current integer to test if its square equals n.
 * Return: The square root if found, otherwise -1 if no natural square root.
 */

int _sqrt_helper(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_sqrt_helper(n, i + 1));
}
