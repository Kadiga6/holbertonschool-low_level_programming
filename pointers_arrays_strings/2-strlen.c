#include "main.h"

/**
 * _strlen - Returns to the lenght of a string.
 * @s:Pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

return (length);
}

