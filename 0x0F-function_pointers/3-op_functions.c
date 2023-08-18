#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers and returns the result
 * @a: first number
 * @b: second number
 * Return: result of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a and returns the result
 * @a: first number
 * @b: second number
 * Return: result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers and returns the result
 * @a: first number
 * @b: second number
 * Return: result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b and returns the result
 * @a: first number
 * @b: second number
 * Return: result of a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus a by b and returns the result
 * @a: first number
 * @b: second number
 * Return: result of a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100)
	}
	return (a % b);
}
