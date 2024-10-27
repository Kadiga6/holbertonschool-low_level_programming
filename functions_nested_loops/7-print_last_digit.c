#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Function to print the last digit of a number
 *
 * @n: The number to check
 *
 * Return: The value of the last digit
 */


int print_last_digit(int n)
{
int last_digit;
char digit_char;

if (n < 0)
{
n = -n;
}
last_digit = n % 10;
digit_char = last_digit + '0';
write(1, &digit_char, 1);
return (last_digit);
}
