#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory
 * @b: number of bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(sizeof(char) * b);
		if (p == NULL)
			exit(98);
	return (p);
}
