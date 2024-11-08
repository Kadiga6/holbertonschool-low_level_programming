#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: Number
 * Return: the factorial of a given number.
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
{
return (factorial(n));
}
}
