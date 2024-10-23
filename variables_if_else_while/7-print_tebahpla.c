#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
char lettre;
for (lettre = 'z'; lettre >= 'a'; lettre--)
{
putchar(lettre);
}
putchar('\n');

return (0);
}
