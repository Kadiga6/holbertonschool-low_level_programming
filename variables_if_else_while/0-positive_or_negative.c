#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main -Entry point
 *
 * Return:Always 0 (Sucess)
 */
int main(void)
{
int n;
n = rand() - RAND_MAX / 2;
printf("%d ", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
