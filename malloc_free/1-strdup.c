#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a copy of the given string.
 *@str: The string to duplicate.
 *Return: Pointer to the duplicated string, or NULL if input is NULL
 * or if memory allocation fails.
 */

char *_strdup(char *str)
{
char *s;
	int a = 0, i = 1;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
