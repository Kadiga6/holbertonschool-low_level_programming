#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  executes a function given as a element of an array.
 * @array: the array containing the elements to be processed
 * @action: a pointer to the function
 * @size: the size of the array
 * Return: Always 0(Ssuccess)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
	return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
