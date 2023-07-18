#include "main.h"

/**
 * print_sign -  prints + if n is positive, - n if n is negative,
 * 0 if n is zero
 *
 * @n: number that it's sign should be printed
 *
 * Return: 1 if n is positive, 0 if n is zero, minus 1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
