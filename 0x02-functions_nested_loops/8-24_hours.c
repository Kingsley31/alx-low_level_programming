#include "main.h"

/**
 * print_time - prints the current time
 *
 * @outer: time in hour
 *
 * @inner: time in minutes
 *
 * Return: void
 */
void print_time(int outer, int inner)
{
	if (outer < 10)
	{
		_putchar('0');
		_putchar(outer + '0');
		_putchar(':');
	}
	else if (outer > 9)
	{
		int fdigit = outer / 10;
		int sdigit = outer % 10;

		_putchar(fdigit + '0');
		_putchar(sdigit + '0');
		_putchar(':');
	}
	if (inner < 10)
	{
		_putchar('0');
		_putchar(inner + '0');
	}
	else if (inner > 9)
	{
		int fdigit = inner / 10;
		int sdigit = inner % 10;

		_putchar(fdigit + '0');
		_putchar(sdigit + '0');
	}
}


/**
 * jack_bauer - prints 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int outer = 0;

	while (outer <= 23)
	{
		int inner = 0;

		while (inner <= 59)
		{
			print_time(outer, inner);
			_putchar('\n');
			inner++;
		}
		outer++;
	}
}
