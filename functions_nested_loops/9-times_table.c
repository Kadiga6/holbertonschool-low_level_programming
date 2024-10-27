#include <stdio.h>
#include "main.h"
/**
 * times_table - check the 9 times table, starting with 0.
 * @i,j,n: the characters to be checked
 * Return: the table.
 */


void times_table(void)
{
int i, j, n;

for (i = 0; i < 10; i++)
{
_putchar('0');
for (j = 1; j < 10; j++)
{

_putchar(',');
_putchar(' ');
n = i * j;
if (n <= 9)
{
_putchar(' ');
_putchar(n + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
_putchar('\n');
}
}
