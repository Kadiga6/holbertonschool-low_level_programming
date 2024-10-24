#include <stdio.h>

/**
  *main - Entry point
  *
  * Return:Always 0(Sucess)
  */

int main(void)
{
int n;
int i = 0;
for (n = 0; n <= 9; n++)
{
putchar(n + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('$');

putchar('\n');

return (0);
}
