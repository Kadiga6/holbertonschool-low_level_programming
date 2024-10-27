#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check all natural numbers to 98
 * @n: character to be checked.
 * Return: always 98.
 */


void print_to_98(int n)
{
while (n < 98)
{
printf("%d", n);
printf(", ");
n++;
}
while (n > 98)
{
printf("%d", n);
printf(", ");
n--;
}
if (n == 98)
printf("98");
printf("\n");
}
