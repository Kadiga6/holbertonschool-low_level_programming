#include <stdio.h>

/**
 *  main -  that prints the number of arguments passed into it
 * @argc: variable
 * @argv: variable to check
 * Return: always zero
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
