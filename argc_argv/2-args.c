#include <stdio.h>

/**
* main -  that prints the number of arguments passed into it
* @argc: variable
* @argv: variable to check
* Return: always zero
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
