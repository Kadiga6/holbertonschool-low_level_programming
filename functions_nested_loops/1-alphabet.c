#include <stdio.h>
#include "main.h"


/**
  *print_alphabet - use prototype
  *
  */

void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
_putchar(alphabet[i]);
}
_putchar('\n');
}