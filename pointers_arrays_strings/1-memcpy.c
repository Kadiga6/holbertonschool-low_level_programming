#include "main.h"

/**
  * _memcpy - Copies a memory area.
 * @dest: Pointer to the destination where bytes will be copied.
 * @src: Pointer to the source of bytes to copy.
 * @n: Number of bytes to copy from src to dest.
 *
 * Return: A pointer to the destination (dest).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
