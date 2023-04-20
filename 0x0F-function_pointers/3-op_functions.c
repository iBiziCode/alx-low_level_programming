#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The modulo two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
