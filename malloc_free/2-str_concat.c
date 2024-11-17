#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1:space in meemory
 * @s2: space in memory
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
char *result;
int length1 = 0, length2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[length1] != '\0')
length1++;

while (s2[length2] != '\0')
length2++;

result = (char *)malloc((length1 + length2 + 1) * sizeof(char));
if (result == NULL)
	return (NULL);

for (i = 0; i < length1; i++)
result[i] = s1[i];

for (j = 0; j < length2; j++)
result[i + j] = s2[j];

result[length1 + length2] = '\0';

return (result);
}
