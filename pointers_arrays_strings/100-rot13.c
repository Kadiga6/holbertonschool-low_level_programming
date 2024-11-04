#include "main.h"
#include "100-main.c"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *rot13(char *s)
{
char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; alphabet[j] != '\0'; j++)
{
if (s[i] == alphabet[j])
{
s[i] = rot13[j];
break;
}
}
}
return (s);
}
