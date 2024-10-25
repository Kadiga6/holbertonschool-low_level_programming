#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if a character is lowercase.
 * @c: the character to be checked.
 * return value of '_islower' _islower
 * Return: 1 if the character is lowercase, 0 otherwise.
 */


int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
