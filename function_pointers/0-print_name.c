#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name of function
 * @f: pointer
 * Return: Always 0 (Sucess)
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
