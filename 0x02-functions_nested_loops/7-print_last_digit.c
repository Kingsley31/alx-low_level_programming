#include "main.h"


/**
 * print_last_digit - prints last digit of n and returns the 
 * last digit.
 *
 * @n: number it's last digit needs to be retrieved
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	int last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
