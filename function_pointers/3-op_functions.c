#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - the sum
*@a: first number
*@b: second number
*Return: the sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - the difference
 *@a: first number
 *@b: second number
 *Return:The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the multiplication
 *@a: first number
 *@b: second number
 *Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division
 *@a: first number
 *@b: second number
 *Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * op_mod - the remainder of the division of a by b.
 *@a: first number
 *@b: second number
 *Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
