#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: Pointer
 * Return: reklaW notloC
 */

void _print_rev_recursion(char *s)
	{
	if (*s)
	{
	_putchar(*s);
	_print_rev_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
	}
