#include "main.h"
/**
 * print_last_digit - Function to print the last digit of a number
 *
 * @lastD: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */


int print_last_digit(lastD)
{
int last_digit = lastD % 10;

if (last_digit < 0)
{
last_digit = -last_digit;
}

_putchar(last_digit + '0');
return (last_digit);
}
