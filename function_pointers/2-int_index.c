#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: array of the elements
 * @cmp: pointer to compare the values.
 * @size: size of the array
 * Return: if size <=0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
	return (-1);
if (size <= 0)
	return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
	return (i);
}
return (-1);
}
